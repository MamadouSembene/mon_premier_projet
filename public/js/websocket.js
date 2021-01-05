var socket = new WebSocket('ws://localhost:8081');
socket.addEventListener("open", () => console.log("You are connected"));
socket.onmessage = function(event) { //Recuperation des messages envoyé par le serveur
    console.log(event.data);
    var tmp = document.getElementById('tmp')
    tmp.innerHTML = event.data
}