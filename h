<!doctype html>
<html lang="en" class="h-100">
<head>
  <!-- Required meta tags -->
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">


  <!-- Bootstrap CSS -->
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css" integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">
  <link rel="stylesheet" href="https://unpkg.com/leaflet@1.7.1/dist/leaflet.css"
   integrity="sha512-xodZBNTC5n17Xt2atTPuE1HxjVMSvLVW9ocqUKLsCC5CXdbqCmblAshOMAS6/keqq/sMZMZ19scR4PsZChSR7A=="
   crossorigin=""/>
   <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.2/css/all.min.css">
   <link rel="shortcut icon" href="/static/favicon.ico">
   <script src="https://unpkg.com/leaflet@1.7.1/dist/leaflet.js"
   integrity="sha512-XQoYMqMTK8LvdxXYG3nZ448hOEQiglfqkJs1NOQV44cWnUrBc8PkAOcXy20w0vlaXaVUearIOBhiXZ5V3ynxwA=="
   crossorigin=""></script>

  <title>Population Stats Staging</title>

</head>
<body class="d-flex flex-column h-100">
<main role="main" class="flex-shrink-0">
   <div class="jumbotron">
      <div class="container"> 
        <h1><svg xmlns="http://www.w3.org/2000/svg" width="32" height="32" fill="currentColor" class="bi bi-bar-chart-line-fill" viewBox="0 0 16 16">
          <path d="M11 2a1 1 0 0 1 1-1h2a1 1 0 0 1 1 1v12h.5a.5.5 0 0 1 0 1H.5a.5.5 0 0 1 0-1H1v-3a1 1 0 0 1 1-1h2a1 1 0 0 1 1 1v3h1V7a1 1 0 0 1 1-1h2a1 1 0 0 1 1 1v7h1V2z"/>
        </svg>
        Population Stats Staging</h1>
        <div class="input-group mb-3 input-group-lg">
          <div class="input-group-prepend">
            <span class="input-group-text">Address</span>
           </div>
          <input class="form-control" name="address_input" type="text" id="address_input" value="" onfocus="this.value=''">
          <div class="input-group-append">
           <button class="btn btn-secondary" type="submit" onclick="UpdateURL()"><i class="fa fa-search"></i></button>
           <button type="button" onclick="window.location.href = '/'" class="btn btn-primary"><i class="fas fa-map-marker-alt"></i></i></button>

          </div>
        </div>
        
    </div>    
  </div>
  <div class="container">
     
        <div class="alert alert-warning">
          
          <strong>I&#39;m up</strong>
          
        </div>

  </div>
</main>
<footer class="footer mt-auto py-2 bg-light">
  <div class="container">
    <span class="text-light"> | Data from <a class="text-info" href="https://www.census.gov/data/developers/data-sets/popest-popproj/popest.html">2019 U.S. Census</a> | View project on <a class="text-info" href="https://github.com/vszal/pop-stats/">Github</a>
  </span>
  </div>
</footer>

  <script>
  document.getElementById('address_input').onkeydown = function(e){
    if(e.keyCode == 13){
      UpdateURL()
    }
  };
  function UpdateURL(){
    //window.alert(window.location.hostname + "/q");
    var domain = "/q" 
    var query_prefix = "?address="
    var addr_input = document.getElementById("address_input").value;
    window.location.href = domain + query_prefix + addr_input;
  }
  var map = L.map('mapid').setView([, ], 10);
  // add the OpenStreetMap tiles
  L.tileLayer('https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', {
    maxZoom: 19,
    attribution: '&copy; <a href="https://openstreetmap.org/copyright">OpenStreetMap contributors</a>'
  }).addTo(map);

  // show the scale bar on the lower left corner
  L.control.scale().addTo(map);

  </script>
</body>
</html>