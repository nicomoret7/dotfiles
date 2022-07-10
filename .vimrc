" Activate the syntax
syntax on

" Show line number
set number

" Movement
nnoremap j gj
nnoremap k gk
set scrolloff=5

" Indent config
set autoindent
"set smartindent
"set cindent
set smarttab
set tabstop=4
set softtabstop=4


" Search
"set hlsearch
set smartcase
set ignorecase	
set incsearch

" Autocompile notes
" autocmd BufWritePost *note-*.md silent !buildNote %:p
autocmd BufWritePost *note-*.ms silent !~/.scripts/buildNote_groff %:p 

" Java helpers
au BufRead,BufNewFile *.cup setfiletype java
autocmd FileType java inoremap sout System.out.println()<left>

" Autobrackets
inoremap " ""<left>
inoremap ' ''<left>
inoremap ( ()<left>
inoremap [ []<left>
inoremap { {}<left>
"inoremap {<CR> {<CR>}<ESC>O<TAB>
inoremap {;<CR> {<CR>};<ESC>O<TAB>
inoremap {: {:  :}<left><left><left>
inoremap ¿ ¿?<left>

" HTML
inoremap < <><left>
