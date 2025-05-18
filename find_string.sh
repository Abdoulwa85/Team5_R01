#!/bin/bash

# Ce script recherche une chaîne de caractères spécifique dans un fichier.

# Lire le nom du fichier
read f

# Lire la chaîne de caractères à rechercher
read c

# Rechercher la chaîne dans le fichier
if grep -q "$c" "$f"; then
    echo "La chaîne '$c' a été trouvée dans $f."
else
    echo "La chaîne '$c' n'a pas été trouvée dans $f."
fi
