#!/bin/bash
echo $1 + $2
x=5
# ((operazione aritmetica))
x=$(($x+1))
# `expr $x + 1` altgr + '
echo $x
x=`expr $x + 1`
echo $x