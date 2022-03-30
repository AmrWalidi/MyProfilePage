
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

  var i = 0;
  var txt ="Web sayfama HOŞ GELDİNİZ! Benim adım Amr Nawaf Walıdı İnönü Üniversitesi öğrenciyim. ";
  var speed = 60;
  window.onload = function typeWriter() {
    if (i < txt.length) {
      if (i >= 37 && i <= 52) {
        document.getElementById("demo").innerHTML +=
          "<span style='color:  rgba(241, 128, 35, 0.993);font-family: cursive;'>" +
          txt.charAt(i) +
          "</span>";
        i++;
        setTimeout(typeWriter, speed);
      } else {
        document.getElementById("demo").innerHTML += txt.charAt(i);
        i++;
        setTimeout(typeWriter, speed);
      }
    }
  };
 
 
