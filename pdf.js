async function genPDF() {
    var downloading = document.getElementById("table");

    var doc = new jsPDF('1','pt');

    await html2canvas(downloading,{
        width: 3600
    }).then((canvas)=>{
        doc.addImage(canvas.toDataURL("image/png"),'PNG',0,0,2000,200);
    })
    doc.save("test.pdf");
  }


