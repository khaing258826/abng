<?php
$name=$_POST[`name´];
$visitor_email=$_POST[`email´];
$name=$_POST[`major´];
$name=$_POST{[`year´];
$message=$_POST[`message´];
$email-from='SGC@gmail.com';
$email_subject="New Form Submission";
$email_body="User Name: $name.\n".
             "User Email: $visitor_email.\n".
              "User Major: $name.\n".
              "User Year: $name. \n".
               "User Message: $message.\n";
$to="ookhaing258826@gmail.com";
$headers="From:$email_from\r\n";
$headers .="Reply-To: $visitor_email\r\n";
mail($to,$email_subject,$email_body,$headers);
header("Location:contactmore.html");  
?>        