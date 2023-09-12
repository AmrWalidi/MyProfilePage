  var i = 0;
  var txt ="Web Sayfama HOŞ GELDİNİZ! Benim Adım AMR WALIDI Yazılım Mühendisliği Okuyorum. ";
  txt = txt.split(" ");
  var speed = 600;
  window.onload = function typeWriter() {
    if (i < txt.length) { 
        document.getElementById("demo").innerHTML += txt[i];
        i++;
        setTimeout(typeWriter, speed);
    }
  }


  function massage() {
    window.alert("masaj başarlı gönderdi!");
  }
 
 
 
