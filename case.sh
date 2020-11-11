#!/bin/bash
opzione=$1
echo "Il personaggio indicato e' $opzione"
case $opzione in 
    ( pippo )
        echo "Pippo è il miglior amico di Topolino";;
    ( pluto )
        echo "Pluto è il cane di Topolino";;
    ( minnie )
        echo "Minnie è la fidanzata di Topolino";;
    ( * )
        echo "Questo personaggio non la conosco!"
esac