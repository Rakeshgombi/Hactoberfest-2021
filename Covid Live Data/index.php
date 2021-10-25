<!DOCTYPE html>
<html lang="en">

<head>
    <!--Required meta tags-->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <title>karnatakacoviddata</title>
    <link rel="stylesheet" href="covid.css">
    <!--Bootstrap CSS-->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css" integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh" crossorigin="anonymous">
</head>

<body>

    <?php
    $dataV2 = file_get_contents('https://data.covid19india.org/v2/state_district_wise.json');
    $data = file_get_contents('https://data.covid19india.org/data.json');
    $coronaV2 = json_decode($dataV2, true);
    $corona = json_decode($data, true);
    $dcountV2 = count($coronaV2);
    $dcount = count($corona);
    ?>
    <h1 class="text-center">Covid Data </h1>
    <div class="kar" style="display: inline-block; width: 240px; height: 70px; padding: 5px; border: 1px solid blue;">
        <h4>Karnatak <br>
            <?php echo date("d/m/Y");
            $date = date_default_timezone_set('Asia/Kolkata');
            echo "&nbsp;";
            echo date("h:i:s"); ?></h4>
    </div>
    <br><br>
    <!-- **************************************************below karnatak -->
    <div class="col-md-12 text-center">
        <div style="display: inline-block; width: 240px; height: 70px; padding: 5px; border: 1px solid blue; background:aqua;">
            <h4>Confirmed<br>
                <?php echo $corona['statewise']['16']['confirmed']; ?></h4>
        </div>&ensp;&ensp;
        <div style="display: inline-block; width: 240px; height: 70px; padding: 5px; border: 1px solid blue; background: #DD1C5E;">
            <h4>Active <br>
                <?php echo $corona['statewise']['16']['active']; ?></h4>
        </div>&ensp;&ensp;
        <div style="display: inline-block; width: 240px; height: 70px; padding: 5px; border: 1px solid blue; background: #FFEB3B;">
            <h4>Recovered <br>
                <?php echo $corona['statewise']['16']['recovered']; ?></h4>
        </div>&ensp;&ensp;
        <div style="display: inline-block; width: 240px; height: 70px; padding: 5px; border: 1px solid blue; background: #E670C3;">
            <h4>Deaths <br>
                <?php echo $corona['statewise']['16']['deaths']; ?></h4>
        </div>&ensp;&ensp;
    </div>
    <br>
    <?php
    $data = file_get_contents('https://data.covid19india.org/v2/state_district_wise.json');
    $corona = json_decode($data, true);
    $dcount = count($corona[16]['districtData']);

    ?>
    <table class="table table-striped table-primary">
        <thead>
            <tr>
                <th>District</th>
                <th>Active Cases</th>
                <th>Confirmed</th>
                <th>Deceased</th>
                <th>Recovered</th>
            </tr>
        </thead>
        <tbody>
            <?php
            $i = 0;
            while ($i < $dcount) {
            ?>
                <tr>
                    <td> <?php echo $corona[16]['districtData'][$i]['district']; ?></td>
                    <td><?php echo $corona[16]['districtData'][$i]['active']; ?></td>
                    <td><?php echo $corona[16]['districtData'][$i]['confirmed']; ?></td>
                    <td><?php echo $corona[16]['districtData'][$i]['deceased']; ?></td>
                    <td><?php echo $corona[16]['districtData'][$i]['recovered']; ?></td>
                <?php
                $i++;
            }
                ?>
                </tr>
        </tbody>
    </table>

    <!--Optional JavaScript-->
    <!--jQuery first, then Popper.js, then Bootstrap JS-->
    <script src="https://code.jquery.com/jquery-3.4.1.slim.min.js" integrity="sha384-J6qa4849blE2+poT4WnyKhv5vZF5SrPo0iEjwBvKU7imGFAV0wwj1yYfoRSJoZ+n" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js" integrity="sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuUD4Ih7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6" crossorigin="anonymous"></script>
</body>

</html>