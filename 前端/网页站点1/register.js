// 生成 6 位字母和数字随机验证码
function createCode() {
    const characters = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
    let code = '';
    for (let i = 0; i < 6; i++) {
        const randomIndex = Math.floor(Math.random() * characters.length);
        code += characters.charAt(randomIndex);
    }
    const span = document.getElementById("codeSpan");
    span.innerHTML = code;
}
 
// 验证用户名
function checkUname() {
    const uname = document.getElementById("username").value;
    const regChinese = /^[\u4e00-\u9fa5]{2,4}$/;
    const regNumber = /^\d{8}$/;
    const span = document.getElementById("usernameSpan");
    if (uname === "" || uname === null) {
        span.innerHTML = "用户名不能为空";
        span.style.color = "red";
        return false;
    } else if (regChinese.test(uname) || regNumber.test(uname)) {
        span.innerHTML = "用户名 ok";
        span.style.color = "green";
        return true;
    } else {
        span.innerHTML = "用户名不符合规则，应为 2 - 4 位汉字或 8 位纯数字";
        span.style.color = "red";
        return false;
    }
}
 
// 验证密码
function checkPwd() {
    const pwd = document.getElementById("password").value;
    const reg = /^[a-z]\w{5,7}$/;
    const span = document.getElementById("passwordSpan");
    const strengthSpan = document.getElementById("passwordStrength");
    if (pwd.length < 6) {
        strengthSpan.innerHTML = "密码强度弱";
        strengthSpan.style.color = "red";
    } else if (reg.test(pwd)) {
        strengthSpan.innerHTML = "密码强度中";
        strengthSpan.style.color = "blue";
    } else {
        strengthSpan.innerHTML = "密码强度强";
        strengthSpan.style.color = "green";
    }
    if (pwd === "" || pwd === null) {
        span.innerHTML = "*密码不能为空";
        span.style.color = "red";
        return false;
    } else if (reg.test(pwd)) {
        span.innerHTML = "*密码 ok";
        span.style.color = "green";
        return true;
    } else {
        span.innerHTML = "*密码格式不正确，以字母开头，长度为 6 - 8 位，包含字母、数字和下划线";
        span.style.color = "red";
        return false;
    }
}
 
// 校验确认密码
function checkPwd2() {
    const pwd = document.getElementById("password").value;
    const pwd2 = document.getElementById("confirmPassword").value;
    const span = document.getElementById("confirmPasswordSpan");
    if (pwd2 === "" || pwd2 === null) {
        span.innerHTML = "确认密码不能为空";
        span.style.color = "red";
        return false;
    } else if (pwd === pwd2) {
        span.innerHTML = "确认密码 正确";
        span.style.color = "green";
        return true;
    } else {
        span.innerHTML = "两次密码不一致";
        span.style.color = "red";
        return false;
    }
}
 
// 校验手机号
function checkPhone() {
    return checkField("phone", /^1[3,4,5,7,8]\d{9}$/);
}
 
// 校验邮箱
function checkMail() {
    return checkField("mail", /^([a-zA-Z0-9_-])+@([a-zA-Z0-9_-])+(.[a-zA-Z0-9_-])+$/);
}
 
// 校验下拉框是否选择
function checkSelect(id) {
    const select = document.getElementById(id);
    const span = document.createElement('span');
    span.className = 'error-message';
    const parent = select.parentNode;
    const existingError = parent.querySelector('.error-message');
    if (existingError) {
        parent.removeChild(existingError);
    }
    if (select.value === "") {
        span.innerHTML = `请选择${select.previousElementSibling.textContent.replace('：', '')}`;
        span.style.color = "red";
        parent.appendChild(span);
        return false;
    }
    return true;
}
 
// 校验是否同意公司协议
function checkAgree() {
    document.getElementById("sub").disabled = !document.getElementById("agree").checked;
}
 
// 提交判断
function checkSub() {
    const code = document.getElementById("code").value;
    const realCode = document.getElementById("codeSpan").innerHTML;
    const codeErrorSpan = document.getElementById("codeErrorSpan");
    if (code !== realCode) {
        codeErrorSpan.innerHTML = "验证码错误";
        codeErrorSpan.style.color = "red";
        return false;
    } else {
        codeErrorSpan.innerHTML = "";
    }
    return checkUname() && checkPwd() && checkPwd2() && checkPhone() && checkMail() &&
        checkSelect('crowd') && checkSelect('nativePlace') && checkSelect('country');
}
 
// 封装校验函数
function checkField(id, reg) {
    const inp = document.getElementById(id);
    const va = inp.value;
    const alt = inp.alt;
    const span = document.getElementById(id + "Span");
    if (va === "" || va === null) {
        span.innerHTML = alt + "不能为空";
        span.style.color = "red";
        return false;
    } else if (reg.test(va)) {
        span.innerHTML = alt + "ok";
        span.style.color = "green";
        return true;
    } else {
        span.innerHTML = alt + "不符合规则";
        span.style.color = "red";
        return false;
    }
}
 
// 切换密码可见性
function togglePasswordVisibility(inputId) {
    const input = document.getElementById(inputId);
    if (input.type === "password") {
        input.type = "text";
    } else {
        input.type = "password";
    }
}
 
// 打开规则弹窗
function openRulePopup() {
    document.getElementById('rule-popup').style.display = 'block';
}
 
// 关闭规则弹窗
function closeRulePopup() {
    document.getElementById('rule-popup').style.display = 'none';
}
 
// 注册成功后保存用户信息到 localStorage
function register() {
    if (checkSub()) {
        const username = document.getElementById("username").value;
        const password = document.getElementById("password").value;
        const crowd = document.getElementById("crowd").value;
        const nativePlace = document.getElementById("nativePlace").value;
        const country = document.getElementById("country").value;
        const users = JSON.parse(localStorage.getItem('users')) || {};
        if (users[username]) {
            alert("该用户名已存在，请更换用户名");
        } else {
            users[username] = {
                password: password,
                crowd: crowd,
                nativePlace: nativePlace,
                country: country
            };
            localStorage.setItem('users', JSON.stringify(users));
            alert("注册成功，请前往登录页面登录");
            window.location.href = "login.html";
        }
    }
}
 
// 为表单提交事件添加注册函数
document.getElementById('registerForm').addEventListener('submit', function (e) {
    e.preventDefault();
    register();
});// JavaScript Document