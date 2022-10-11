<?php
    #WAP to check the number is Palindrome or not.
    $text = "NITIN";
#Type 1.
    $reverse = strrev($text);
#Type 2.
    $length = strlen($text);
    $reverse = "";
    for($i = $length-1;$i>=0;$i--){
        $reverse .= $text[$i];
    }

    if($reverse == $text){
        echo "$text is a Palindrome String.";
    }
    else{
        echo "$text is not a Palindrome String.";
    }
?>