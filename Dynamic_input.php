<?php
$connection = new mysqli("localhost", "root", "", "db");
if($connection -> connect_error){
  die("Connection Not Established".$connection -> connect_error);
}
else{
  echo "Connection Established<br>";
}
$a = $_GET['fname'];
$b = $_GET['lname'];
$c = $_GET['phone'];
$query = "Insert into bca values ('$a','$b', '$c')";
if($connection -> query($query) === True){
  echo "Data has been Inserted";
}
else{
  echo "There has been some problem".$connection -> connect_error;
}
?>