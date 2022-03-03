function add() {
    var y = parseInt(document.getElementById("txt1").value);
    var z = parseInt(document.getElementById("txt2").value);
    var x = y + z;
    document.getElementById("result").innerHTML = x;
  }
  function minus() {
    var y = parseInt(document.getElementById("txt1").value);
    var z = parseInt(document.getElementById("txt2").value);
    var x = y - z;
    document.getElementById("result").innerHTML = x;
  }
  function multiply() {
    var y = parseInt(document.getElementById("txt1").value);
    var z = parseInt(document.getElementById("txt2").value);
    var x = y * z;
    document.getElementById("result").innerHTML = x;
  }
  function divide() {
    var y = parseInt(document.getElementById("txt1").value);
    var z = parseInt(document.getElementById("txt2").value);
    var x = y / z;
    document.getElementById("result").innerHTML = x;
  }
  function divide() {
    var y = parseInt(document.getElementById("txt1").value);
    var z = parseInt(document.getElementById("txt2").value);
    var x = y % z;
    document.getElementById("result").innerHTML = x;
  }