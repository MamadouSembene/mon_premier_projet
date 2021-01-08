var socket = new WebSocket('ws://localhost:8081');
        socket.addEventListener("open", ()=>console.log("You are connected"));
        socket.onmessage=function(event) {//Recuperation des messages envoyé par le serveur
          console.log(event.data);
          var tmp = document.getElementById('tmp')
          tmp.innerHTML = event.data + "°C"
          let my_temp = event.data
          let img = document.getElementById('img')
          if (my_temp <= 26) {
            img.setAttribute("src", "/images/imageCold.jpg")
          }else{
            img.setAttribute("src", "/images/imageHot.jpg")
          }
          
        }