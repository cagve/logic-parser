# ANALIZADOR SINTÁCTICO DE FÓRMULAS EN LATEX.
## Requisitos
* neovim nightly
* treesitter

## Funcionamiento
### Comandos LaTeX
* \\lnot
* \\land
* \\lor
* \\to
* \\leftrightarrow

### Comandos
**LPCheck**
Comprueba si la fórmula introducida es una fórmula bien formada

## TODO
- [ ] Listener que se ejecute continuamente y si estás en entorno matemático compruebe si la fómula está bien formada
- [ ] Parser para otras lógicas. FOL, modal, etc.
- [ ] Comandos latex como variables

## Configuración de neovim
1. Instalar la nueva gramática Tree-sitter [[https://github.com/nvim-treesitter/nvim-treesitter#adding-parsers]]
2. Añadir el filetype en ftplugin detect `au BufNewFile,BufRead *.lp set filetype=lp`
