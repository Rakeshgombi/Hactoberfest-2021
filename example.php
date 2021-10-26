<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>covid data</h1>
    
        <?php
        $data=file_get_contents('https://cricket-api.vercel.app/cri.php?url=https://www.cricbuzz.com/live-cricket-score');
  $corona=json_decode($data,true);
  $dcount=count($corona['livescore']);
  echo $dcount;
 echo"<pre>";
 print_r($corona['livescore']);
echo"</pre>";


?>
    
</body>
</html>