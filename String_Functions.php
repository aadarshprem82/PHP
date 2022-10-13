<?php
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
?>