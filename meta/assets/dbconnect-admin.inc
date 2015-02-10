<?php
//purpose: hold specific login data and make database connections for read/write actions
//security: the directory where this file lives must have .htaccess file allowing only calls from php files to have read access to it.

//login data and connection directions
mysql_connect("localhost","YOUR-DB-USER-HERE","YOUR-DB-PASSWORD") or die("Error: Unable to connect to database." . mysql_error());
mysql_select_db("schema_fiction");
?>
