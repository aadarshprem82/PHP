<?php
$connection = new mysqli("localhost", "root", "", "db");
if($connection -> connect_error){
  die("Connection Not Established".$connection -> connect_error);
}
else{
  echo "Connection Established<br>";
}
$query = "Select * from BCA";
if($result = $connection -> query($query)){
  while($obj = $result -> fetch_object()){
     printf("%s %s %d <br>", $obj -> FName, $obj -> LName, $obj -> Phone);
  }
}
else{
  echo "There has been some problem".$connection -> connect_error;
}
?>