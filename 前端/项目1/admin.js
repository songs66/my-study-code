// 管理员功能实现
const API_BASE = 'http://localhost:5000/api';

async function addBook() {
  await fetch('/api/books', {
    method: 'POST',
    body: JSON.stringify(bookData)
  });
}

async function loadInventory() {
  try {
    const response = await fetch(`${API_BASE}/inventory`);
    const inventory = await response.json();
    renderInventory(inventory);
  } catch (error) {
    console.error('加载库存失败:', error);
  }
}

function renderInventory(inventory) {
  const tbody = document.querySelector('#inventoryTable tbody');
  tbody.innerHTML = inventory.map(item => `
    <tr>
      <td>${item.title}</td>
      <td>${item.author}</td>
      <td>${item.isbn}</td>
      <td>${item.quantity}</td>
      <td>
        <button onclick="updateStock('${item.isbn}', 1)">+1</button>
        <button onclick="updateStock('${item.isbn}', -1)">-1</button>
      </td>
    </tr>
  `).join('');
}

window.onload = loadInventory;