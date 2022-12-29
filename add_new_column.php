<?php
$connection = new mysqli("localhost", "root", "", "db");
if($connection -> connect_error){
  die("Connection Not Established".$connection -> connect_error);
}
else{
  echo "Connection Established<br>";
}
$query = "Alter table bca add Department varchar(30)";
if($connection -> query($query) === True){
  echo "Data has been Altered";
}
else{
  echo "There has been some problem".$connection -> connect_error;
}
?>