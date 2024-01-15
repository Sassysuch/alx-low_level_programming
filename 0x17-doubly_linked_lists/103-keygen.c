#!/bin/bash/
if [ $# -eq 0 ]
then
    echo "Usage: ./keygen5 username"
    exit 1
fi
username=$1
key=0
# loop through each character in the username
for (( i=0; i<${#username}; i++ ))
do
    char=${username:$i:1}
    ascii=$(printf "%d" "'$char")
    key=$((key + ascii))
done
key=$((key * 0x1337d00d))
printf "%x\n" $key
