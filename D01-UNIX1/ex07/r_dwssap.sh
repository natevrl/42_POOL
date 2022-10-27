cat /etc/passwd | grep -v "#" | sed -n 'n;p' | awk -F ':' '{print $1}' | rev | head -n $FT_LINE1 | tail -n $FT_LINE2 | awk 1 ORS=', ' | rev | cut -c 3- | rev | sed 's/$/./'
