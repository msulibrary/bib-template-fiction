<?php
//purpose: hold specific login data for database connections
//security: the directory where this file lives must have .htaccess file allowing only calls from php files to have read access to it.

//db name, login data and connection directions
$dbconn = new mysqli('localhost', 'YOUR-DB-USER-HERE', 'YOUR-DB-PASSWORD-HERE', 'schema_fiction');
$dbconn->set_charset('utf8');

if ($dbconn->connect_errno) {
    die('Unable to connect to database [' . $dbconn->connect_error . ']');
}

?>
