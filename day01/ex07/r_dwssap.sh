cat /etc/passwd | sed '/^#/ d' | awk 'NR%2==0' | cut -d ":" -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr "\n" " " | sed "s/ /, /g"  | sed "s/, $/./" | tr -d "\n"
