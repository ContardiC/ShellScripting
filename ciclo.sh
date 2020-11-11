#!/bin/bash
# Visualizza i primi k multipli di n
n=$1
k=$2
echo "Ecco i primi $k multipli di $n:"
i=1
while [ $i -le $k ]; do
    ((x=n*i))
    echo -n "$x "
    ((i++))
done
echo "Fatto!"