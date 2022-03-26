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
  
  function renkDeğiştirme(){
      document.getElementById("metin").style="color: red; font-size: 30px"; 
    }
  
  const Öğrenci = {
    adı: "Amr",
    No: 2210224064,
    doğumTarih: "12.08.2002",
  };
  console.log(Öğrenci);


