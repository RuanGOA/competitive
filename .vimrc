"Presets of Ruan Gomes                                                 
"UFCG student

"Presets GERAL

syntax on
set t_Co=256

"Number lines
set nu
highlight LineNr ctermfg=226
highlight CursorLineNr ctermfg=226 ctermbg=240

"Enable CursorLine
set cursorline
highlight CursorLine cterm=none ctermbg=240
"cterm = Cor do underline
"ctermbg = Cor da linha

:set softtabstop=3 shiftwidth=3 noexpandtab
set hls 
set ruler

set background=dark

" Configuracao para auto-complete com tab
set incsearch                   " procura texto em tempo real, enquanto e' teclado
set ic                              "Nao diferencia mais/minusc
set magic                        " usa 'magia' ao procurar texto =)
set bs=indent,eol,start
set laststatus=1               " mostra sempre a statusbar com o nome do ficheiro
set ruler                         " mostra a linha e coluna na statusbar
set title                          " mostra o nome do ficheiro no titulo do terminal
set smarttab                   "Tabulacao inteligente
set smartindent
set autoindent
set sm                            " mostra o ultimo par de parenteses fechados
set wildmode=longest,list       " mostra completacoes ao usar o TAB
set showmode
set showcmd                     " mostra comando incomletos (marcar caracter, etc)
set shortmess=atI               " mensagens abreviadas

map <BS> X
set et sm js
set nowrap

"====== complementação de palavras ====
"usa o tab em modo insert para completar palavras
function! InsertTabWrapper(direction)
    let col = col('.') - 1
    if !col || getline('.')[col - 1] !~ '\k'
        return "\<tab>"
    elseif "backward" == a:direction
        return "\<c-p>"
    else
        return "\<c-n>"
    endif
endfunction
inoremap <tab> <c-r>=InsertTabWrapper ("forward")<cr>
inoremap <s-tab> <c-r>=InsertTabWrapper ("backward")<cr>
