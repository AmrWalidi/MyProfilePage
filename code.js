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
  function renkDeğiştirme() {
    document.getElementById("metin").style = "color: red; font-size: 30px";
  }
  const Öğrenci = {
    adı: "Amr",
    No: 2210224064,
    doğumTarih: "12.08.2002",
  };
  console.log(Öğrenci);

function big1(){
  document.getElementById("link1").style="font-size: 35px;position: fixed; left: 60px"
}
function big2(){
  document.getElementById("link2").style="font-size: 35px;position: fixed; right: 680px"
}
function big3(){
  document.getElementById("link3").style="font-size: 35px; position: fixed; right: 20px"
}

function normal1(){
  document.getElementById("link1").style="font-size: 25px;position: fixed; left: 60px"
}
function normal2(){
  document.getElementById("link2").style="font-size: 25px;position: fixed; right: 680px"
}
function normal3(){
  document.getElementById("link3").style="font-size: 25px; position: fixed; right: 20px"
}