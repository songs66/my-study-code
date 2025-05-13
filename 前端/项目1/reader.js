// 读者功能实现
const API_BASE = 'http://localhost:5000/api';

async function searchBooks() {
  const response = await fetch(`/api/books?q=${query}`);
  // 实时获取图书可用状态
}

function renderBooks(books) {
  const tbody = document.querySelector('#bookTable tbody');
  tbody.innerHTML = books.map(book => `
    <tr>
      <td>${book.title}</td>
      <td>${book.author}</td>
      <td>${book.isbn}</td>
      <td><span class="status ${book.available ? 'available' : 'unavailable'}">
        ${book.available ? '可借阅' : '已借出'}
      </span></td>
    </tr>
  `).join('');
}

// 初始化加载所有书籍
window.onload = searchBooks;