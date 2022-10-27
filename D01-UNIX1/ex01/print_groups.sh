#! /bin/sh
FT_USER=
id -G -n  $FT_USER | tr ' ' ',' | tr -d '\n' 
