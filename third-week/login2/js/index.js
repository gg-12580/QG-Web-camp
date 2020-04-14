let serverUrl = 'http://recruit.qgailab.com/'
let re_btn = document.getElementById('re')
let lg_btn = document.getElementById('lg')

re_btn.onclick = function(){
    if( reTest() == true){
        reAjax();
    }
}

function reTest() {
    var oUname = document.getElementById("re_username"),
        oUpass = document.getElementById("re_pass"),
        oUmail = document.getElementById("re_email"),
        oUphone = document.getElementById("re_phone"),
        oUname2 = document.getElementById("re_name"),
        oError = document.getElementById("error_box1"),
        isError = true;
    if (oUname.value.length > 16 || oUname.value.length < 8) {
        oError.innerHTML = "用户名请输入8-16位字符";
        isError = false;
        return isError;
    }else for(var i=0;i<oUname.value.charCodeAt(i);i++){
        if((oUname.value.charCodeAt(i)<48)||(oUname.value.charCodeAt(i)>57) && (oUname.value.charCodeAt(i)<97)||(oUname.value.charCodeAt(i)>122)){
            oError.innerHTML = "用户名必须为小写字母或数字组成";
            isError = false;
            return isError;
        }
    }
    if (oUpass.value.length > 16 || oUpass.value.length < 8) {
        oError.innerHTML = "密码请输入8-16位字符"
        isError = false;
        return isError;
    }
    if(oUmail.value.length<0){
        oError.innerHTML = "请输入您的邮箱";
        isError = false;
        return isError;
    }else{
        reg=/^([a-zA-Z0-9_-])+@([a-zA-Z0-9_-])+(.[a-zA-Z0-9_-])+/;
        if(!reg.test(oUmail.value)){    
          oError.innerHTML = "对不起，您输入的邮箱格式不正确!";
          isError = false;
          return isError;
        }
    } 
    for(var i=0;i<oUphone.value.charCodeAt(i);i++){
        if((oUphone.value.charCodeAt(i)<48)||(oUphone.value.charCodeAt(i)>57)||(oUphone.value.length != 11)){
            oError.innerHTML = "请输入正确的手机号码";
            isError = false;
            return isError;
        }
    }
    if (oUname2.value.length <= 0) {
        oError.innerHTML = "请输入名字";
        isError = false;
        return isError;
    }
    oError.innerHTML ="<br>"; 
    return isError;
}

function reAjax() {
    let data = {
        username: document.getElementById('re_username').value,
        password: document.getElementById('re_pass').value,
        phone: document.getElementById('re_phone').value,
        email: document.getElementById('re_email').value,
        name: document.getElementById('re_name').value
    }
    //建立请求对象实例
    let http = new XMLHttpRequest()
    http.open("POST",serverUrl + "ajax/register", true);
    //设置请求头
    http.setRequestHeader("Content-type","application/json");
    //post方法发送数据，如果是get方法可以不用写send的参数
    http.send(JSON.stringify(data));
    //onreadystatechange相当于一个事件，当服务器有响应的时候就会触发这个方法
    http.onreadystatechange = function() {
        if (http.readyState === 4 && http.status === 200) {
            //此时这个返回的数据是个字符串，我们需要调用JSON.parse方法把他转成js对象才能够操作
            let result = JSON.parse(http.responseText)
            //成功对应做成功的业务逻辑，失败对应做失败的业务逻辑
            if (result.code === 1) {
                //do something
                alert(result.message)
            } else {
                alert(result.message)
            }
        }
    }
}

lg_btn.onclick = function (){
    if( lgTest() == true) {
        lgAjax();
    }
}
function lgAjax() {
    let data = {
        username: document.getElementById('uname').value,
        password: document.getElementById('upass').value
    }
    //建立请求对象实例
    let xml_http = new XMLHttpRequest()
    xml_http.open("POST",serverUrl + "ajax/login",true);
    //设置请求头
    xml_http.setRequestHeader("Content-type","application/json");
    //post方法发送数据，如果是get方法可以不用写send的参数
    xml_http.send(JSON.stringify(data));
    //onreadystatechange相当于一个事件，当服务器有响应的时候就会触发这个方法
    xml_http.onreadystatechange = function() {
        if (xml_http.readyState === 4 && xml_http.status === 200) {
            //此时这个返回的数据是个字符串，我们需要调用JSON.parse方法把他转成js对象才能够操作\                                                                                                                                               .0
            let result = JSON.parse(xml_http.responseText)
            //成功对应做成功的业务逻辑，失败对应做失败的业务逻辑
            if (result.code === 1) {
                //do something
                alert(result.message)
            } else {
                alert(result.message)
            }
        }
    }
}

function lgTest() {
    var oUname = document.getElementById("uname"),
        oUpass = document.getElementById("upass"),
        oError = document.getElementById("error_box2");
    var isError = true;
    if (oUname.value.length > 16 || oUname.value.length < 8) {
        oError.innerHTML = "用户名请输入8-16位字符";
        isError = false;
        return isError;
    }else for(var i=0;i<oUname.value.charCodeAt(i);i++){
        if((oUname.value.charCodeAt(i)<48)||(oUname.value.charCodeAt(i)>57) && (oUname.value.charCodeAt(i)<97)||(oUname.value.charCodeAt(i)>122)){
            oError.innerHTML = "用户名必须为小写字母跟数字组成";
            isError = false;
            return isError;
        }
    }
    if (oUpass.value.length > 20 || oUpass.value.length < 6) {
        oError.innerHTML = "密码请输入6-20位字符"
        isError = false;
        return isError;
    }
    oError.innerHTML = "<br>";
    return isError;
}

var lg_bt=document.getElementById('loginB'),
    re_bt=document.getElementById('signB'),
    lgContent=document.getElementById('login'),
    reContent=document.getElementById('sign');
lg_bt.onclick=function(){
    lgContent.style.display="block";
    reContent.style.display="none";
}
re_bt.onclick=function(){
    reContent.style.display="block";
    lgContent.style.display="none";
}