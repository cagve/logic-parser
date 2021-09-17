package.loaded['logicparser'] = nil

local api = vim.api
local bufnr

local function get_visual_text(bufnr)
	local mark_a = api.nvim_buf_get_mark(bufnr,"<")
	local mark_b = api.nvim_buf_get_mark(bufnr,">")

	local rowa,columna = unpack(mark_a)
	local rowb,columnb = unpack(mark_b)

	local line = api.nvim_buf_get_lines(bufnr, rowa-1,rowb,false)
	local visual_text = string.sub(line[1],columna+1,columnb+1)
	return visual_text
end

local function get_math_formula(bufnr)
	local formula = get_visual_text(bufnr)
	formula = string.gsub(formula,"\\to", "→")
	formula = string.gsub(formula,"\\land", "→")
	formula = string.gsub(formula,"\\lor", "→")
	formula = string.gsub(formula,"\\lnot", "→")
	return formula
end

local function parse_formula(bufnr)
    local parser = vim.treesitter.get_parser(bufnr, lang)
	local root = parser:parse()[1]:root()
	return root:has_error()
end

local function main()
	bufnr = api.nvim_win_get_buf(0)

	local options = {
		style='minimal',
		relative='cursor',
		border="rounded",
		row=1,
		col=0,
		width=50,
		height=2
	}

	if(api.nvim_eval('vimtex#syntax#in_mathzone()')==1)
		then
			local formula_buf = api.nvim_create_buf(false,false)                        -- Crea el buffer
			api.nvim_buf_set_option(formula_buf, 'filetype', 'lp')                      -- Le asigna el tipo de archivo al buffer
			api.nvim_buf_set_keymap(formula_buf, 'n', 'q', ':bw!<CR>', {silent=true}) -- Le asigna el keymap para cerrarlo
			api.nvim_command("normal vi$y")                                             -- Selecciona la fórmula

			-- Análisis
			api.nvim_buf_set_lines(formula_buf,0,-1,false,{get_visual_text(bufnr)})     -- Escribe la fórmula TODO completion
			if(parse_formula(formula_buf))
			then
				api.nvim_buf_set_lines(formula_buf,0,-1,false,{"Incorrect syntax"})     -- Escribe la fórmula TODO completion
				api.nvim_buf_set_lines(formula_buf,1,-1,false,{get_math_formula(bufnr)})     -- Escribe la fórmula TODO completion
			else
				api.nvim_buf_set_lines(formula_buf,0,-1,false,{"Correct syntax"})     -- Escribe la fórmula TODO completion
				api.nvim_buf_set_lines(formula_buf,1,-1,false,{get_math_formula(bufnr)})     -- Escribe la fórmula TODO completion
			end

			local win = api.nvim_open_win(formula_buf,true,options)                      -- Abrir ventana
			api.nvim_buf_set_option(formula_buf, 'modifiable', false)                    -- Le asigna la propiedad de no modificable
		else
			print("No estás en entorno matemático")
	end
end

return main()
