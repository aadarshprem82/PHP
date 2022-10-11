<?php
	#WAP to implement ternary operator and coalescing operator
	#$c = 4;
	$a = $c ?? 3;
	$show = $a%2 == 0 ? "Even.":"Odd.";
	echo $a." is ".$show."<br>";
	#$b = readline("Enter the value of b : ");
	#echo $b;
	$a = 30;
	if($a < 0){
		echo "$a is Negative<br>";
	}
	else{
		echo "$a is Positive<br>";
	}
	$a = 53;
	$b = 33;
	$c = 44;
	if($a>$b){
		if($b>$c){
			echo "$a is the Greatest Number<br>";
		}
		else{
			if($c>$a){
				echo "$c is the Greatest Number<br>";
			}
			else{
				echo "$a is the Greatest Number<br>";
			}
		}
	}
	else{
		if($b>$c){
			echo "$b is the Greatest Number<br>";
		}
		else{
			if($c>$a){
				echo "$c is the Greatest Number<br>";
			}
			else{
				echo "$a is the Greatest Number<br>";
			}
		}
	}
	$percentage = 65;
	if($percentage > 90){
		echo "You have got an <strong >A+</strong>.<br>";
	}
	else if($percentage > 80){
		echo "You have got an <strong>A</strong>.<br>";
	}
	else if($percentage > 70){
		echo "You have got a <strong>B+</strong>.<br>";
	}
	else if($percentage > 60){
		echo "You have got a <strong>B</strong>.<br>";
	}
	else if($percentage > 50){
		echo "You have got a <strong>C</strong>.<br>";
	}
	else{
		echo "You have <strong>FAIL</strong>ed in this Exam!!<br>";
	}
?>