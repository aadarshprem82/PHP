<?php
	$a = "image/";
	$path = $a.basename($_FILES['up_file']['name']);
	$extn = strtolower(pathinfo($path, PATHINFO_EXTENSION));
#echo $extn;
/*	if(file_exists($path)){
		echo "This File is already available.";
	}*/
/*	echo $_FILES['up_file']['size'];
	if($_FILES['up_file']['size'] > 500000){
		echo "File Size Exceeded!!";
	}*/

	if($extn != "jpg" && $extn != "png"){
		echo "File is not supported!!";
	}
	else{
		if(move_uploaded_file($_FILES['up_file']['tmp_name'], $path)){
			echo "File Uploaded Successfully";
		}
		else{
			echo "There is something Wrong!!";
		}
	}
?>