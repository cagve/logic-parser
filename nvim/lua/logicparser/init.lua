package.loaded['logicparser'] = nil

local api = vim.api

local function get_visual_text(bufnr)
	local mark_a = api.nvim_buf_get_mark(bufnr,"<")
	local mark_b = api.nvim_buf_get_mark(bufnr,">")

	local rowa,columna = unpack(mark_a)
	local _,columnb = unpack(mark_b)

	local line = api.nvim_buf_get_lines(bufnr, rowa-1,rowa,false)
	local visual_text = string.sub(line[1],columna+1,columnb+1)
	return visual_text
end

local function get_math_formula(bufnr)
	api.nvim_command("normal F$") -- Navegar al inicio de la fórmula
    local start_pos = api.nvim_win_get_cursor(bufnr)
	api.nvim_command("normal f$") -- Navegar al inicio de la fórmula
    local end_pos = api.nvim_win_get_cursor(bufnr)
	local start_row,start_column = unpack(start_pos)
	local end_row,end_column = unpack(end_pos)
	print(start_row.." "..end_row) -- Esta es la línea
	print(start_column.." "..end_column) -- Esta es la posición en la línea

	-- TODO
	-- get line start_row       >> local line = api.nvim_buf_get_lines(bufnr, rowa-1,rowa,false)
	-- get substrirng entre $$  >> local visual_text = string.sub(line[1],columna+1,columnb+1)
end

 -- $ hoasdkja sdlkasdj $

local function parse_formula(bufnr)
    local parser = vim.treesitter.get_parser(bufnr, lang)
	local root = parser:parse()[1]:root()
	if(root:has_error())
		then
			print("Fórmula incorrecta")
		else
			print("Fórmula correcta")
	end
end

local function get_math_mode()
	print("Hello world!")
	print(api.nvim_eval('vimtex#syntax#in_mathzone()'))
	-- return vim.eval('vimtex#syntax#in_mathzone()')
end

local function main()
	local bufnr = api.nvim_win_get_buf(0)
	local formula_buf = api.nvim_create_buf(false,true)
	api.nvim_buf_set_option(formula_buf, 'filetype', 'lp')
	api.nvim_buf_set_keymap(formula_buf, 'n', 'q', ':close<CR>', {silent=true})
	api.nvim_buf_set_lines(formula_buf,0,-1,false,{get_visual_text(bufnr)})
	api.nvim_open_win(formula_buf,true,{relative='cursor', row=1, col=0, width=50, height=3})
	-- parse_formula(formula_buf)
end

return get_math_formula()


