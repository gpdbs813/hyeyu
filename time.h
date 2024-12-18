<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>시간표</title>
<style>
body{font-family:Arial,sans-serif;text-align:center;padding:50px}#hover-area{width:300px;height:100px;background-color:#ffe4e1;border:2px solid #ff7f7f;line-height:100px;font-size:20px;color:#333;cursor:pointer;transition:background-color 0.3s ease}#hover-area:hover{background-color:#ffb6c1}#info{font-size:18px;color:#555;display:none}html,body{height:100%}header{background-color:#FFC7C7;height:15%;text-align:center;display:flex;justify-content:center;align-items:center;border-bottom:2px solid lightgray}section{height:75%;padding:20px;background-color:#F6F6F6;overflow-y:auto}footer{background-color:#8785A2;height:10%;text-align:right;line-height:50px;position:relative;border-top:2px solid gray}table{border-collapse:collapse;margin:auto}td,th{text-align:center;padding:10px;height:15px;width:100px}thead,tfoot{background:blue;color:whitesmoke}th{height:40px;width:400px}tbody tr:nth-child(even){background:#c0e1f5}tbody tr:hover{background:#ffdfe4}
</style>
<script>
function showInfo(subject) {
    var info = document.getElementById("info");
    if (subject === "데이터사이언스기초") {
        info.innerHTML = "데이터 사이언스를 배우는 기초적인 과목입니다. (신성교수님)";
    } else if (subject === "AI를 위한 기초수학") {
        info.innerHTML = "인공지능을 이해하는데 필요한 기초 수학을 다룹니다. (신성교수님)";
    } else if (subject === "C프로그래밍") {
        info.innerHTML = "C언어를 이용하여 프로그래밍을 배우는 과목입니다. (장현주교수님)";
    } else if (subject === "웹프로그래밍") {
        info.innerHTML = "웹 개발에 필요한 기초적인 프로그래밍을 배웁니다. (장현주교수님)";
    }
    info.style.display = "block";
}
java
function hideInfo() {
    document.getElementById("info").style.display = "none";
}
</script>
</head>
<header><b>😊안녕하세요 비즈니스컨설팅학과 강혜윤입니다😊</b></header>
<section>
<table>
<caption><b>[2024학년도 2학기 시간표]</b></caption>
<thead>
<tr><th>과목</th><th>시작시간</th><th>종료시간</th></tr>
</thead>
<tbody>
<tr onmouseover="showInfo('데이터사이언스기초')" onmouseout="hideInfo()"><td>데이터사이언스기초</td><td>9:00</td><td>9:50</td></tr>
<tr onmouseover="showInfo('AI를 위한 기초수학')" onmouseout="hideInfo()"><td>AI를 위한 기초수학</td><td>10:00</td><td>10:50</td></tr>
<tr onmouseover="showInfo('C프로그래밍')" onmouseout="hideInfo()"><td>C프로그래밍</td><td>13:00</td><td>14:50</td></tr>
<tr onmouseover="showInfo('웹프로그래밍')" onmouseout="hideInfo()"><td>웹프로그래밍</td><td>15:00</td><td>15:50</td></tr>
</tbody>
</table>
<div id="info" style="font-size:18px;color:#555;margin-top:20px;"></div>
</section>
</html>
