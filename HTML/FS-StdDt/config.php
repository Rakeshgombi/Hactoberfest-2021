<?php
    extract($_REQUEST);
    $file=fopen("V3.txt","a");
    fwrite($file,"");
    fwrite($file, $name ."|");
    fwrite($file,"");
    fwrite($file, $email ."|");
    fwrite($file,"");
    fwrite($file, $age ."|");
    fwrite($file,"");
        if (($dept =="Computer Science") || ($dept =="computer science") || ($dept =="computer science and engineering") || ($dept =="Computer Science and Engineering")) {
             fwrite($file,"cse" ."|");
                    }
        elseif (($dept =="Mechanical") || ($dept =="mechanical") || ($dept =="mechanical engineering") || ($dept =="Mechanical Engineering")) {
            fwrite($file,"me" ."|");
                    }
        elseif (($dept =="Civil") || ($dept =="civil") || ($dept =="civil engineering") || ($dept =="Civil Engineering")) {
            fwrite($file,"ce" ."|");
                    }
        elseif (($dept =="Electrical and Electronics") || ($dept =="electrical and electronics") || ($dept =="electrical and electronics engineering") || ($dept =="Electrical and Electronics Engineering")) {
            fwrite($file,"ene" ."|");
                    }
        elseif (($dept =="Electronics and Communication") || ($dept =="Electronics and Communication") || ($dept =="electronics and communication engineering") || ($dept =="Electronics and Communication Engineering")) {
            fwrite($file,"enc" ."|");
                    }
        elseif (($dept =="Information Science") || ($dept =="information science") || ($dept =="information science and engineering") || ($dept =="Information Science and Engineering")) {
            fwrite($file,"ise" ."|");
                    } 
        else{
                fwrite($file,"ise" ."|");
        }
          
    fwrite($file,"");
    fwrite($file, $usn ."|");
    fwrite($file,"");
    fwrite($file, $sem ."|");
    fwrite($file,"");
    if ($state =="Andhra pradesh"){
      fwrite($file,"AP" ."\n");
            }
   elseif ($state =="Himachal pradesh"){
        fwrite($file,"HP" ."\n");
            } 
    elseif ($state =="Madhya pradesh"){
      fwrite($file,"MP" ."\n");
            } 
    elseif ($state =="Uttar pradesh"){
      fwrite($file,"UP" ."\n");
            }
    elseif ($state =="Karnataka"){
       fwrite($file,"KA" ."\n");
            }                   
    else{
        fwrite($file,"KA" ."\n");
             }    
    fclose($file);


//      To Store Without Delemeter
$file1=fopen("V2.txt","a");
fwrite($file1,"");
fwrite($file1, $name ." ");
fwrite($file1,"");
fwrite($file1, $email ." ");
fwrite($file1,"");
fwrite($file1, $age ." ");
fwrite($file1,"");
fwrite($file1, $dept ." ");
fwrite($file1,"");
fwrite($file1, $usn ." ");
fwrite($file1,"");
fwrite($file1, $sem ." ");
fwrite($file1,"");
fwrite($file1,$state ."\n");
            
fclose($file1);


// To Store data With Identifier Example Name:Uday Dept:Computer Science 
$file2=fopen("V1.txt","a");
fwrite($file2,"Name:");
fwrite($file2, $name ."\n");
fwrite($file2,"Email:");
fwrite($file2, $email ."\n");
fwrite($file2,"Age:");
fwrite($file2, $age ."\n");
fwrite($file2,"Dept:");
fwrite($file2, $dept ."\n");
fwrite($file2,"USN:");
fwrite($file2, $usn ."\n");
fwrite($file2,"Sem:");
fwrite($file2, $sem ."\n");
fwrite($file2,"State:");
fwrite($file2,$state ."\n\n");
            
fclose($file2);
    header("location: index.php");
 ?>
