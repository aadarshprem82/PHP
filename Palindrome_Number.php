<?php
    #WAP to check the number is Palindrome or not.
    $num = 12321;
    $temp = $num;
    $reverse = 0;
    while($num > 0){
        $reverse = $reverse*10 + $num%10;
        $num =(int)($num/10);
    }
    if($reverse == $temp){
        echo "$temp is a Palindrome number.";
    }
    else{
        echo "$temp is not a Palindrome number.";
    }
?>