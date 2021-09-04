# PROJECTO ANALIZADOR SINTÁCTICO DE FÓRMULAS PROPOSICIONALES EN LATEX.
## Requisitos
* neovim nightly
* treesitter

## Versiones
### Versión 0.1:
 - Selecciono un trozo de texto (VisualMode)
 - Crea un nuevo buffer de tipo formula (lp)
 - Carga treesitter 
 - Si en el arbol hay algún nodo de error, entonces lanza el error

TODO
 - Function `extract_formula`: extraer texto de visual mode a un nuevo buffer
 - Function `check_formula`: comprobar si el arbol tiene algun error
 - Function `pop_up_message`: Si hay errores devolver un pop up

### Versión 0.2:
 - Extraer con tree-sitter cada fórmula de un documento latex
 - Comprobar que todas son correctas

### Versión 0.n
 - Añadir FOL

## Configuración de neovim
1. Instalar la nueva gramática Tree-sitter [[https://github.com/nvim-treesitter/nvim-treesitter#adding-parsers]]
2. Añadir el filetype en ftplugin detect `au BufNewFile,BufRead *.lp set filetype=lp`
