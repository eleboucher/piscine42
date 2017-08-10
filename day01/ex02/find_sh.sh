find . -type f  -name "*.sh"  | xargs -n 1 basename | sed "s/\.sh//" 
