#!/bin/bash

# Fonction récursive pour calculer la factorielle
factoriel() {
  if [ "$1" -le 1 ]; then
    echo 1
  else
    local prev=$(factoriel $(( $1 - 1 )))
    echo $(( $1 * prev ))
  fi
}

calcul(){
    local a=$1
    local b=$2
    local somme=$((a + b))
    local diff=$((a - b))
    local mult=$((a * b))
    echo "le resultat de l'operation $a+$b est $somme"
    echo "le resultat de l'operation $a-$b est $diff"
    echo "le resultat de l'operation $a*$b est $mult"
    if (($b != 0)); then
        local div=$((a / b))
        echo "le resultat de l'operation $a/$b est $div"
    else
        echo "a/b n'est pas possible : Erreur division par 0!"
    fi
    echo "Le resultat de l'operation a! est $(factoriel $a)"
	echo "Le resultat de l'operation b! est $(factoriel $b)"
}

main(){
	  echo "main function"

	  # Accept user input
	  read -p "Entrez la valeur de a : " a
	  echo "a = $a"
	  read -p "Entrez la valeur de b : " b
	  echo "b = $b"
	  calcul $a $b
}
commit(){
  git add $1
  git commit -m "$2 $3"
}