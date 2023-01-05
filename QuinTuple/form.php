<!Doctype html>
<html>

<head>
    <meta http-equiv="Content-type" content="text/html; charset=utf-8">
    <title>Registration Form</title>
</head>

<body style="font-family: Roboto;" bgcolor="salmon">
    <?php
        include_once 'head.html';
    ?>
    <h1 align="center">Student Form</h1>
    <form id="frm" action="Regstrtn.php" method="get">
        <div align="center">
            <img align="center" src="adm.gif" style="border-radius: 10px;" width="300" height="140">
            <table>
                <tr>
                    <td><label>Name</label></td>
                    <td><input type="text" name="sname"></td>
                </tr>
                <tr>
                    <td><label>Date of Birth </label></td>
                    <td><input style="font-family: Roboto;" type="date" name="dob"></td>
                </tr>
                <tr>
                    <td><label>Gender</label></td>
                    <td><input type="radio" name="gen" value="Male">Male
                        <input type="radio" name="gen" value="Female">Female
                        <input type="radio" name="gen" value="Others">Others</td>
                </tr>
                <tr>
                    <td><label>Father's Name</label></td>
                    <td><input type="text" name="fthname"></td>
                </tr>
                <tr>
                    <td><label>Mother's Name</label></td>
                    <td><input type="text" name="mname"></td>
                </tr>
                <tr>
                    <td><label>Course</label></td>
                    <td><input type="radio" name="cor" value="BTech.">BTech.
                        <input type="radio" name="cor" value="BCA">BCA
                        <input type="radio" name="cor" value="BBA">BBA</td>

                </tr>
                <tr>
                    <td><label>Hobbies</label></td>
                    <td><select name="hobby" id="hobby">
		<option value="Hobbies">Hobbies</option>
		<option value="Playing circket">Playing Cricket</option>
		<option value="Listening to Music">Listening to Music</option>
		<option value="Reading books">Reading Books</option></td>
	</tr>
	<tr>
		<td><label>Address</label></td>
		<td><textarea name="address" style="font-family: Roboto;" rows="3" cols="20"></textarea></td>
	</tr>
</table></div>
<div align="center">
<input type="submit">
<input type="button" value="Clear"">
<input type="button" value="Validate"></div>
</form>
</body>
</html>