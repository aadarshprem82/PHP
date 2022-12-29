<?php
$connection = new mysqli("localhost", "root", "", "don_bosco");
if($connection -> connect_error){
  die("Connection Not Established".$connection -> connect_error);
}
else{
  echo "Connection Established!!";
}
?>