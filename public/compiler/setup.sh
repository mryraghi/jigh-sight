#!/bin/bash

echo '=> Exporting $PATH'
export PATH=$PATH':$HOME/bin'

# flex
echo '=> Running flex'
flex -l lex.l

# yacc
echo '=> Running yacc'
yacc -vd yacc.y

# gcc
echo '=> Running gcc'
gcc y.tab.c -ly -ll -o ~/bin/jigh-sight #&>/dev/null 
