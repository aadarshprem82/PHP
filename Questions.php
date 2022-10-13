<?php
  /*
  $string = "Hello World";
  echo strlen($string)."<br>";
  echo str_word_count("BCA final year is the best class of BTTS.")."<br>";
  echo strrev("Madam")."<br>";
  echo strpos("Hello World","World")."<br>";
  echo str_replace("World","Don Bosco","Hello World")."<br>";
  echo chr(97)."<br>";
  $str = "Hello World";
  print_r(explode(" ",$str));
  echo "<br>".strtolower("Hello World")."<br>";
  echo strtoupper("Hello World")."<br>";
  echo "BCA Final Year ".str_repeat("Best ",15); 
  */
  $string = "Hello World";
  $c = "replace";
echo "<br>From Switch<br>";
#Using Switch.
  switch($c){
    case "length":
	echo strlen($string)."<br>";
	break;
    case "words":
	echo str_word_count($string)."<br>";
	break;
    case "reverse":
	echo strrev($string)."<br>";
	break;
    case "position":
	echo strpos($string,$find)."<br>";
	break;
    case "replace":
	echo str_replace("World","Don Bosco",$string)."<br>";
	break;
    case "lower":
	echo strtolower("Hello World")."<br>";
	break;
    case "upper":
	echo strtoupper("Hello World")."<br>";
	break;
    case "repeat":
	echo "$string".str_repeat("Aadarsh ",15); 
	break;
    default:
	echo "Wrong Input";
	break;
  }

echo "<br>From If-Else.<br>";
#Using Ifs.
  if($c == "length"){
	echo strlen($string)."<br>";
  }
  else if($c == "words"){
	echo str_word_count($string)."<br>";
  }
  else if($c == "reverse"){
	echo strrev($string)."<br>";
  }
  else if($c == "position"){
	echo strpos($string,$find)."<br>";
  }
  else if($c == "replace"){
	echo str_replace("World","Don Bosco",$string)."<br>";
  }
  else if($c == "lower"){
	echo strtolower("Hello World")."<br>";
  }
  else if($c == "upper"){
	echo strtoupper("Hello World")."<br>";
  }
  else if($c == "repeat"){
	echo "$string".str_repeat("Aadarsh ",15); 
  }
  else{
 	echo "Wrong Input";
  }
?>