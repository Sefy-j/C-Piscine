#!/bin/sh
cat /etc/passwd | sed '/#.*/d' | sed -n 'n;p' | awk -F ':' '{print $1}'| rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" |tr '\n' ',' | sed 's/,$/./' | sed 's/, */, /g'| tr -d '\n'
