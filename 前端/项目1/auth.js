// 身份验证逻辑
function showForm(role) {
  document.querySelectorAll('.login-form').forEach(form => form.classList.remove('active'));
  document.getElementById(role + 'Form').classList.add('active');
}

function redirectToReader() {
  // 模拟API调用
  localStorage.setItem('userRole', 'reader');
  window.location.href = 'reader.html';
}

function redirectToAdmin() {
  localStorage.setItem('userRole', 'admin');
  window.location.href = 'admin.html';
}

function logout() {
  localStorage.removeItem('userRole');
  window.location.href = 'login.html';
}