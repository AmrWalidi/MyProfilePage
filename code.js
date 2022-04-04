  var i = 0;
  var txt ="Web Sayfama HOŞ GELDİNİZ! Benim Adım AMR WALIDI Yazılım Mühendisliği Okuyorum. ";
  var speed = 60;
  window.onload = function typeWriter() {
    if (i < txt.length) {
      if (i >= 37 && i <= 46) {
        document.getElementById("demo").innerHTML +=
          "<span style='color:  rgba(255, 130, 28, 0.993);font-family: Arial; font-weight:bold;'>" +
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
 
 
