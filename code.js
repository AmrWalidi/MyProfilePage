  var i = 0;
  var txt ="Web sayfama HOŞ GELDİNİZ! Benim adım Amr Nawaf Walıdı İnönü Üniversitesinde öğrenciyim. ";
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
 
 
