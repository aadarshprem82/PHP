<?php
    include "exit.php";
    $connection = mysqli_connect("localhost", "root", "Dongle@123", "registration");
    if(!$connection){
        die("Connection Not Established".$connection -> connect_error);
    }
    else{
        echo "<script>document.getElementById('frm').style.visibility = 'collapse';\n";
        echo "</script>";
        $_1 = $_GET['sname'];
        $_2 = $_GET['dob'];
        $_3 = $_GET['gen'];
        $_4 = $_GET['fthname'];
        $_5 = $_GET['mname'];
        $_6 = $_GET['cor'];
        $_7 = $_GET['hobby'];
        $_8 = $_GET['address'];
        $sql =  "insert into details values ('$_1', '$_2', '$_3', '$_4', '$_5', '$_6', '$_7', '$_8')";
        if(mysqli_query($connection, $sql)){
            echo '<div align="center"><h1>Form submitted Successfully!!</h1></div>';
        }
        else{
            $err = mysqli_error($connection);
            echo "document.getElementById('fail').innerHTML.value = '$err';\n";
            echo "document.getElementById('failed').style.visibility = 'visible';</script>";
        }
    }
?>