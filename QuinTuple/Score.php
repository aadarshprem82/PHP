<!DOCTYPE html>
<html>

<head>
    <title>Sports</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <style>
        table {
            border-collapse: collapse;
            border-spacing: 0;
            width: 100%;
            border: 1px solid #ddd;
        }
        
        h2 {
            font-size: 50px;
        }
        
        h2:hover {
            color: lightseagreen;
        }
        
        th,
        td {
            text-align: left;
            padding: 16px;
        }
        
        tr:nth-child(even) {
            background-color: black;
            color: white;
        }
    </style>
</head>
<?php
    include 'head.html';
?>
<body style="font-family: Roboto;">
    <h2 align="center">Basketball Scorecard</h2>
    <table>
        <tr>
            <th>Team</th>
            <th>Captain</th>
            <th>Points</th>
        </tr>
        <tr>
            <td>Spartans</td>
            <td>Ajit</td>
            <td>7</td>
        </tr>
        <tr>
            <td>Gucci Gang</td>
            <td>Mihir</td>
            <td>6</td>
        </tr>
        <tr>
            <td>Underdogs</td>
            <td>Anuj</td>
            <td>4</td>
        </tr>
    </table>

</body>

</html>