#!/bin/sh
echo $FT_NBR1+$FT_NBR2 | tr "'" '0' | tr '\\"?!' '1234' | tr 'mrdoc' '01234' | xargs echo "obase=13;ibase=5;" | bc | tr '0123456789ABC' 'gtaio luSnemf'

# on fait la somme avec echo somme, pire translate sur le premier en 0 parce aue probleme de quote, translate tout ca, bc changement de base, tr la nouvelle base en gtaio
# xargs echo base 5 en base 13, bc changement de base, 01234567899..... gtaio luSnemf  , le xargs permet de concatener les esultats des precedentes pipes

#On transforme la base 5 en base 13 afin de coller avec le nombre de caracteres du sujet.
