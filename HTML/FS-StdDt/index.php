<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <style media="screen">

  body{
    margin: 0;
    padding: 0;
    font-family: sans-serif;
    background-image: url(f2.jpg);
    background-size: cover;
  }
  .box{
    position: absolute;
    top: 60%;
    left: 50%;
    transform: translate(-50%,-50%);
    width: 800px;
    padding: 40px;
    background: rgba(0, 0, 0, 0.6);
    box-sizing: border-box;
    box-shadow: 0 15px 25px rgba(0, 0, 0, 0.5);
    border-radius: 10px;
  }
  .box h2{
    margin: 0 0 30px;
    padding: 0px;
    color: #fff;
    text-align: center;
  }

  .box p{
    margin: 0 0 30px;
    padding: 0px;
    color: #fff;
    text-align: center;
  }
  .box .input-box{
    position: relative;
  }
  .box .input-box input{
    width: 100%;
    padding: 10px 0px;
    font-size: 16px;
    color: #fff;
    letter-spacing: 1px;
    margin-bottom: 30px;
    border: none;
    outline: none;
    background: transparent;
    border-bottom: 1px solid #fff;
  }
  .box .input-box label{
    position: absolute;
    top: 0;
    left: 0;
    letter-spacing: 1px;
    padding: 10px 0px;
    font-size: 16px;
    color: #fff;
    transition: .5s;
  }
  .box .input-box input:focus ~ label,
  .box .input-box input:valid ~ label{
    top: -18px;
    left: 0px;
    color: #03a9f4;
    font-size: 12px;
  }
  .box input[type="submit"]{
    background: transparent;
    border: none;
    outline: none;
    color: #fff;
    background: #227be3;
    padding: 10px 20px;
    border-radius: 5px;
    cursor:pointer;
  }
  .box input[type="submit"]:hover{
    background-color: #3067b9;
  }

  /* FOR GET DATA */
  .box input[type="button"]{
    background: transparent;
    border: none;
    outline: none;
    color: #fff;
    background: #227be3;
    padding: 10px 20px;
    border-radius: 5px;
    cursor:pointer;
  }
  .box input[type="button"]:hover{
    background-color: #3067b9;
  }
  .dropbtn {
  background-color: #04AA6D;
  color: rgb(117, 253, 231);
  padding: 16px;
  font-size: 16px;
  border: none;
}

.dropdown {
  position: relative;
  display: inline-block;
  style:"float: right";
}

.dropdown-content {
  display: none;
  position: absolute;
  background-color:;
  min-width: 160px;
  box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
  z-index: 1;
}

.dropdown-content a {
  color: black;
  padding: 12px 16px;
  text-decoration: none;
  display: block;
}

.dropdown-content a:hover {background-color: rgb(117, 253, 231);}

.dropdown:hover .dropdown-content {display: block;}

.dropdown:hover .dropbtn {background-color: #3e8e41;}
  </style>
  <title>Document</title>
</head>
<body>
  <div class="box">
    <h2>Enter Student Data</h2>
    <form action="config.php">
      <div class="input-box">
        <input type="text" name="name"  autocomplete="off" required>
        <label for="">Name</label>
      </div>
      <div class="input-box">
        <input type="email" name="email"  autocomplete="off" required>
        <label for="">Email</label>
      </div>
      <div class="input-box">
        <input type="text" name="age"  autocomplete="off" required>
        <label for="">Age</label>
      </div>
      <div class="input-box">
        <input type="text" name="dept"  autocomplete="off" required>
        <label for="">Department</label>
      </div>
      <div class="input-box">
        <input type="text" name="usn"  autocomplete="off" required>
        <label for="">USN</label>
      </div>
      <div class="input-box">
        <input type="number" name="sem"  autocomplete="off" required>
        <label for="">Sem</label>
      </div>
      <div class="input-box">
        <input type="text" name="state"  autocomplete="off" required>
        <label for="">State</label>
      </div>
        <input type="submit" value="Submit">
        <a href="gtdata.html"><input type="button" value="Getdata"></a>
        <a href="aboutus.html"><input type="button" value="About us" style="float:right"></a>
        <div class="dropdown">
        <input type="button" value="Stored Data"></a>
         <div class="dropdown-content">
         <a href="Detailed.php">Detailed Data</a>
         <a href="data.php">Only Data</a>
         <a href="shortdt.php">Short Data</a>
        </div>
        </div>
      </form>
  </div>
</body>
</html>
