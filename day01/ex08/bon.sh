ldapsearch  -LLLQ "sn=*bon*"  | grep "sn:" | wc -l | tr -d  " "
