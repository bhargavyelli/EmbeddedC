#!/bin/bash

var="devops"
grep -L "$var" *.txt > output.txt


while IFS= read -r line
do
    for word in $line
    do
        echo "$word"
        grep -n -i "$var" "$word"
    done

done < output.txt