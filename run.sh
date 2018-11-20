#!/bin/bash

#Display date
date=$(date +%d-%m-%Y)

#Text to write in the files
text=$"/************************************  
 Author : Luis Teixeira  
 Date   : $date  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
"

run(){

for file in "$1"/*; do 
if [ -d "$file" ]
    then 
        echo "***********$(basename "$file") directory***********"
        run "$file"


else
	echo "$(basename "$file") ----------------------> done"
	append_something "$text" "$file"
fi
done
}


# Functions
# Append texto to the beginning of a file
append_something() {

	echo "$1$(cat $2)" > $2

}

run "$1"
