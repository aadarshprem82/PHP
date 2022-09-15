<?php
	$a = 10;
    var_dump($a);
    echo "<br>";
    $b = 'Aadarsh';
    var_dump($b);
    echo "<br>";
    $c = 3.5;
    var_dump($c);
    echo "<br>";
    $d = '3.5';
    var_dump($d);
    echo "<br>";
    $e = "3.5";
    var_dump($e);
    $f = "4.5";
    echo "<br>";
    echo($e+$f);
    echo "<br>";
    $f = $d+$e;
    var_dump($f);
    echo "<br>";
    $x = True;
    var_dump($x);
    echo "<br>";
    $some = NULL;
    var_dump($some);
    echo "<br>";
?>
<?php
	define("pi",3.14,TRUE);
    echo "Value of ₶ is ".PI;
    $r = readline('Enter the value : ');
    echo "Circumference of the circle is ".2*pi*$r;
?>
<?php
    #Operators in pHp
    //Arithmetic Operator
    $a = 20;
    $b = 30;
    echo $a+$b;
    echo "<br>";
    echo $a - $b;
    echo "<br>";
    echo $a * $b;
    echo "<br>";
    echo $b/$a;
    echo "<br>";
    echo $b%$a;
    echo "<br>";
?>
<?php
    #Operators in pHp
    //Relational Operator
    $x = 10;
    $y = 20;
    var_dump($x<$y);
    echo "<br>";
    var_dump($x>$y);
    echo "<br>";
    var_dump($x==$y);
    echo "<br>";
    $y = 20.0;
    var_dump($x+10 == $y);
    echo "<br>";
    $y = "20.0";
    var_dump($x+10 == $y);
    echo "<br>";
    #identical operator
    var_dump($x+10 === $y);
    echo "<br>";
    $y = 30;
    var_dump($x<=$y);
    echo "<br>";
    $x = 30;
    var_dump($x<=$y);
    echo "<br>";
    var_dump($x>=$y);
    echo "<br>";
    $x = 10;
    var_dump($x<>$y);
    echo "<br>";
    var_dump($x!=$y);
    echo "<br>";
    $x = "50";
    $y = 50;
    var_dump($y<>$x);
    echo "<br>";
    var_dump($x!==$y);
    echo "<br>";
    $e = 10;
    $f = 20;
    // <=> - -1, 0, 1 
    var_dump($e<=>$f);
    echo "<br>";
?>
