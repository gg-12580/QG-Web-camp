function fnLogin() {
    var oUname = document.getElementById("uname")
    var oUpass = document.getElementById("upass")
    var oError = document.getElementById("error_box2")
    var isError = true;
    if (oUname.value.length > 20 || oUname.value.length < 6) {
        oError.innerHTML = "用户名请输入6-20位字符";
        isError = false;
        return;
    }else if((oUname.value.charCodeAt(0)>=48) && (oUname.value.charCodeAt(0)<=57)){
        oError.innerHTML = "首字符必须为字母";
        return;
    }else for(var i=0;i<oUname.value.charCodeAt(i);i++){
        if((oUname.value.charCodeAt(i)<48)||(oUname.value.charCodeAt(i)>57) && (oUname.value.charCodeAt(i)<97)||(oUname.value.charCodeAt(i)>122)){
            oError.innerHTML = "必须为字母跟数字组成";
        return;
     }
    }
    if (oUpass.value.length > 20 || oUpass.value.length < 6) {
        oError.innerHTML = "密码请输入6-20位字符"
        isError = false;
        return;
    }
    window.alert("success!");
}
function fnSign() {
    var oUname = document.getElementById("re_name")
    var oUpass = document.getElementById("re_pass")
    var oUmail = document.getElementById("re_email")
    var oUphone = document.getElementById("re_phone")
    var oError = document.getElementById("error_box1")
    var isError = true;
    if (oUname.value.length > 20 || oUname.value.length < 6) {
        oError.innerHTML = "用户名请输入6-20位字符";
        isError = false;
        return;
    }else if((oUname.value.charCodeAt(0)>=48) && (oUname.value.charCodeAt(0)<=57)){
        oError.innerHTML = "首字符必须为字母";
        return;
    }else for(var i=0;i<oUname.value.charCodeAt(i);i++){
        if((oUname.value.charCodeAt(i)<48)||(oUname.value.charCodeAt(i)>57) && (oUname.value.charCodeAt(i)<97)||(oUname.value.charCodeAt(i)>122)){
            oError.innerHTML = "必须为字母跟数字组成";
        return;
        }
    }
    if (oUpass.value.length > 20 || oUpass.value.length < 6) {
        oError.innerHTML = "密码请输入6-20位字符"
        isError = false;
        return;
    }
    if(oUmail.value.length<0){
        oError.innerHTML = "请输入您的邮箱";
        isError = false;
        return;
    }else{
        reg=/^([a-zA-Z0-9_-])+@([a-zA-Z0-9_-])+(.[a-zA-Z0-9_-])+/ ;
        if(!reg.test(oUmail.value)){    
          oError.innerHTML = "对不起，您输入的邮箱格式不正确!";
          isError = false;
          return;
        }
    }
    if (oUphone.value.length < 1) {
        oError.innerHTML = "请输入手机号码";
        isError = false;
        return;
    }else for(var i=0;i<oUphone.value.charCodeAt(i);i++){
        if((oUphone.value.charCodeAt(i)<48)||(oUphone.value.charCodeAt(i)>57)){
            oError.innerHTML = "请输入正确的手机号码";
        return;
        }
    } 
    window.alert("success!");
}