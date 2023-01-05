<!DOCTYPE html>
<html lang="en">
<head>
    <title>Questionnaire</title>
    <style>
        body {
            background-color: lightgoldenrodyellow;
        }

        p,
        label {
            font-weight: bolder;
        }

        p {
            font-size : 35px;
            padding: 2px;
            background-color: #E5E4E2;
            text-align: center;
            border-top-right-radius: 15px;
            border-bottom-left-radius: 15px;
        }
        label {
            padding: 2px;
            background-color: coral;
            border-top-right-radius: 10px;
            border-bottom-left-radius: 10px;
        }

        #scr {
            visibility: hidden;
            transform: translate(350px, 100px);
            float: left;
            background-color: lightgreen;
            font-size: 100px;
            font-weight: bolder;
            padding: 10px;
            padding-left: 50px;
            padding-right: 50px;
            border-bottom-right-radius: 50px;
            border-top-left-radius: 50px;
        }

        .form {
            float: left;
        }
    </style>
</head>
<?php
        include 'head.html';
    ?>
<body style="font-family: Roboto;">
    
    <div>
        
        <p>PHP Questionnaire</p>
    </div>
    <div class="form">
        <form>
            <label>Q1. What does PHP stands for?</label><br>
            <input type="radio" name="q1" value="a">Private Home Page<br>
            <input type="radio" name="q1" value="b">Personal Hypertext Processor<br>
            <input type="radio" name="q1" value="c">PHP:Hypertext Preprocessor<br><br>
            <label>Q2. PHP server scripts are surrounded by delimiters, which?</label><br>
            <input type="radio" name="q2" value="a">&lt?php&gt...&lt?&gt<br>
            <input type="radio" name="q2" value="b">&lt?php?&gt<br>
            <input type="radio" name="q2" value="c">&ltscript&gt...&ltscript&gt<br>
            <input type="radio" name="q2" value="d">&lt&&gt...&lt&&gt<br><br>
            <label>Q3. How do you write "Hello World" in PHP?</label><br>
            <input type="radio" name="q3" value="a">echo "Hello World";<br>
            <input type="radio" name="q3" value="b">"Hello World";<br>
            <input type="radio" name="q3" value="c">Documen.Write.("Hello World");<br><br>
            <label>Q4. All variables in PHP start with which symbol?</label><br>
            <input type="radio" name="q4" value="a">&<br>
            <input type="radio" name="q4" value="b">$<br>
            <input type="radio" name="q4" value="c">!<br><br>
            <label>Q5. What is the correct way to end a PHP statement?</label><br>
            <input onclick="score()" type="radio" name="q5" value="a">&ltphp&gt<br>
            <input onclick="score()" type="radio" name="q5" value="b">New Line<br>
            <input onclick="score()" type="radio" name="q5" value="c">;<br>
            <input onclick="score()" type="radio" name="q5" value="d">.<br><br>
        </form>
    </div>
    <div id="scr">
        <p id="score"></p>
    </div>
    <script>
        function score() {
            var c = 0
            for (i = 1; i < 6; i++) {
                if (document.querySelector('input[name="q1"]:checked').value == "c"){
                    c += 1;
                }
                if (document.querySelector('input[name="q2"]:checked').value == "b"){
                    c += 1;
                }
                if (document.querySelector('input[name="q3"]:checked').value == "a"){
                    c += 1;
                }
                if (document.querySelector('input[name="q4"]:checked').value == "b"){
                    c += 1;
                }
                if (document.querySelector('input[name="q5"]:checked').value == "c"){
                    c += 1;
                }
                document.getElementById("scr").style.visibility = "visible"
                document.getElementById("score").innerHTML = (c*4)+"%"
            }
        }
    </script>
</body>

</html>