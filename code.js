function add() {
    var y = parseInt(document.getElementById("num1").value);
    var z = parseInt(document.getElementById("num2").value);
    var x = y + z;
    document.getElementById("sonuc").value= x;
  }
  function minus() {
    var y = parseInt(document.getElementById("num1").value);
    var z = parseInt(document.getElementById("num2").value);
    var x = y - z;
    document.getElementById("sonuc").value= x;
  }
  function multiply() {
    var y = parseInt(document.getElementById("num1").value);
    var z = parseInt(document.getElementById("num2").value);
    var x = y * z;
    document.getElementById("sonuc").value= x; 
 }
  function divide() {
    var y = parseInt(document.getElementById("num1").value);
    var z = parseInt(document.getElementById("num2").value);
    var x = y / z;
    document.getElementById("sonuc").value= x;  
}
  function percent() {
    var y = parseInt(document.getElementById("num1").value);
    var z = parseInt(document.getElementById("num2").value);
    var x = y % z;
    document.getElementById("sonuc").value= x;
  }