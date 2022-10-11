<?php
  /*If-Else, Switch, Ladder-If (If with other Ifs) statements
    Loop - 1. While
Every other Loop
		variable intialization,
		condition
		Increment/Decrement
    
  */
#WAP to display first 20 even numbers without using Ifs.
  $a = 2;
  echo '<h1 style="color:salmon">Even Numbers</h1>';
  while($a<=40){
    echo "$a<br>";
    $a += 2;
  }
#WAP to display the factorial of a number using do-while loop.
  $num = 7;
  $fact = 1;
  echo '<h1 align="center" style="color:salmon">Factorial of '.$num;
  do{
    $fact *= $num;
    $num--;
  }while($num>1);
  echo ' is '.$fact.'</h1>';
#WAP to display the sum of three digit of a number.
  $three = 11523;
  $sum = 0;
  echo '<div style="background-color:lightsalmon">';
  echo '<p align="center" style="color:salmon; font-style:calibri; font-size:80">Sum of the digits of '.$three;
  while($three>0){
    $sum += ($three % 10);
    $three = $three/10;
  }
  echo ' is '.$sum."</h1></div>";
#WAP to check the number is Armstrong or not.
  $three = 371;
  $s = 0;
  $num = $three;
  while($three>0){
    $s += ($three % 10)**3;
    $three = (int)($three/10);
  }
  if($s == $num){
    echo "$num is an Armstrong number.";
  }
  else{
    echo "$num is not an Armstrong number."; 
  }
#WAP to reverse of three digit number.
  $three = 371;
  $i = 100;
  $sum = 0;
  while($three>0){
    $temp = $i*($three%10);
    $sum += $temp;
    $i = $i/10;
    $three = $three/10;
  }
  echo "<br>Reverse is $sum";
?>