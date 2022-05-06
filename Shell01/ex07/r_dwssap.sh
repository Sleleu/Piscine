#!/bin/sh
cat /etc/passwd | grep -v '^#' | cut -d : -f 1 | awk '{if (NR%2==0) print $0}' | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g' | cat -e

#grep -v va inverser la logiaue de grep pour exclure les lignes trouvees au lieu de les trouver
# cut -d : -f 1  permet de delimiter les champs trouves a partir du field 1, donc les logins
#awk capte les lignes pairs et print le premier field
#rev inverse les login
#sort -r trie dans lordre alphabetique inverse avec reverse
#sed -n (read) va lire les lignes des variables, le delimiteur , avec le p (print) permet dobtenir le champ des lignes entre les deux
# tr et encore sed de base / cat -e pur la secu
