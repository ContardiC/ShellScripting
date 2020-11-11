#!/bin/bash
opzione=$1
echo "Il personaggio indicato e' $opzione"
if [[ $opzione == pippo ]]; then
    echo "Pippo è il migliore amico di Topolino"
elif [[ $opzione == pluto ]]; then
    echo "Pluto è il cane di Topolino"
elif [[ $opzione == minnie ]]; then
    echo "Minnie è la fidanzata "
else
    echo "Questo personaggio non lo conosco!"
fi
