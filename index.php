<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
   <link rel="stylesheet" href="index.css">
    <title>Document</title>
</head>
<body>
    <h1 style="text-align: center;">ScoreBoard</h1>
    
        <?php
        $data=file_get_contents('https://cricket-api.vercel.app/cri.php?url=https://www.cricbuzz.com/live-cricket-scores/38051/ind-vs-pak-16th-match-super-12-group-2-icc-mens-t20-world-cup-2021');
  $livecricket=json_decode($data,true);
  $dcount=count($livecricket['livescore']);
//   echo $dcount;
//  echo"<pre>";
//  print_r($corona[16]['districtData'][19]['confirmed']);
// echo"</pre>";


?>
<!--Whole Container -->
<div class="rca-container rca-margin">
    <!--Live ScoreBoard -->
    <div class="rca-row">
        <!--Widget Inner -->
        <div class="rca-column-6">
              <!--Match Series-->
              <div class="rca-medium-widget rca-padding rca-live-season rca-top-border">
            <div class="rca-live-label rca-right"> 
            <?php echo $livecricket['livescore']['title']?>
            <br>
            
           
			<?php
			if(isset($resultMatch['score']) && $resultMatch['score']!='false'){
				echo $resultMatch['score'];
			}
			?>
        
          </div>
            <div class="rca-clear"></div>
            <div class="rca-padding">       
              <h3 class="rca-match-title">
             
			
			<br/>
                
                <?php
				  if(isset($livecricket['livescore']['update'])){
            echo $livecricket['livescore']['update'];
					  
				  }
				  ?>
               
              </h3>
            </div>
          </div>
          <!--Match Schedule Info-->
          <div class="rca-mini-widget rca-history-info">
            <div class="rca-row">
              <span class="rca-col rca-history-title rca-title">Match:</span>
              <span class="rca-col">  <?php echo $livecricket['livescore']['title']?></span>
            </div>
            <div class="rca-row">
              <span class="rca-col rca-history-title">current:</span>
              <span class="rca-col"><?php echo $livecricket['livescore']['current']?> </span>
            </div>
            <div class="rca-row">
              <span class="rca-col rca-history-title">partnership:</span>
              <span class="rca-col"> <?php echo $livecricket['livescore']['partnership']?></span>
            </div>
            <div class="rca-row">
              <span class="rca-col rca-history-title">recentballs:</span>
              <span class="rca-col"> <?php echo $livecricket['livescore']['recentballs']?></span>
            </div>
            <div class="rca-row">
              <span class="rca-col rca-history-title">lastwicket:</span>
              <span class="rca-col"> <?php echo $livecricket['livescore']['lastwicket']?></span>
            </div>
            <div class="rca-row">
              <span class="rca-col rca-history-title">runrate:</span>
              <span class="rca-col"> <?php echo $livecricket['livescore']['runrate']?></span>
            </div>
            <div class="rca-row">
              <span class="rca-col rca-history-title">commentary:</span>
              <span class="rca-col"> <?php echo $livecricket['livescore']['commentary'][0]?></span>
            </div>
          </div>
		</div>

    <div class="rca-column-6">
          <!--Match Series-->
          <div class="rca-medium-widget rca-top-border ">
            <ul class="rca-tab-list">
              <li class="rca-tab-link active" data-tab="tab-41">Team</li>
            </ul>
            <div id="tab-41" class="rca-tab-content rca-padding active">
              <div class="rca-batting-score rca-padding">
                <h3>teamone Batting: </h3>
                <div class="rca-row">
                  <div class="rca-header rca-table">
                    <div class="rca-col rca-player">
                      Batsmen
                    </div>
                    <div class="rca-col">
                      R
                    </div>
                    <div class="rca-col">
                      4s
                    </div>
                    <div class="rca-col">
                      6s
                    </div>
                  </div>
                </div>
                <div class="rca-row">
                  <div class="rca-table">
                    <div class="rca-col rca-player">
                    <?php echo $livecricket['livescore']['batsman']?>
                    </div>
                    <div class="rca-col">
                    <?php echo $livecricket['livescore']['batsmanrun']?>
                    </div>
                    <div class="rca-col">
                    <?php echo $livecricket['livescore']['fours']?>
                    </div>
                    <div class="rca-col">
                    <?php echo $livecricket['livescore']['sixes']?>
                    </div>
                  </div>
                </div>
                <div class="rca-clear"></div>
              </div>
              <div class="rca-bowling-score rca-padding">
                <h3>teamtwo Bowling:</h3>
                <div class="rca-row">
                  <div class="rca-header rca-table">
                    <div class="rca-col rca-player">
                      Bowler
                    </div>
                    <div class="rca-col small">
                      O
                    </div>
                    <div class="rca-col small">
                      R
                    </div>
                    <div class="rca-col small">
                      W
                    </div>
                    </div>
                  </div>
                </div>
                <div class="rca-row">
                  <div class="rca-table">
                    <div class="rca-col rca-player">
                    <?php echo $livecricket['livescore']['bowler']?>
                    </div>
                    <div class="rca-col small">
                    <?php echo $livecricket['livescore']['bowlerover']?>
                    </div>
                    <div class="rca-col small">
                    <?php echo $livecricket['livescore']['bowlerruns']?>
                    </div>
                    <div class="rca-col small">
                    <?php echo $livecricket['livescore']['bowlerwickets']?>
                    </div>
                  </div>
                </div>
                <div class="rca-clear"></div>
              </div>
            </div>
            <div id="tab-42" class="rca-tab-content rca-padding">
            </div>
          </div>

        </div>




        </div>
    </div>
    </div>
    
</body>
</html>