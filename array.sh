#!/bin/bash
rapaci=(aquila 'falco pellegrino' allocco)

echo $rapaci #non corretto

echo ${rapaci[0]} #stampa il primo elemento dell'array


echo ${rapaci[*]} #stampa tutto l'array 

rap=${rapaci[*]} #assegna tutto l'array

echo $rap

echo ${rapaci[2]}     #stampo il terzo elemento dell'array