let cart = [];

function addToCart(item) {
  cart.push(item);
  renderCart();
}

function renderCart() {
  document.getElementById("cart").innerHTML =
    cart.map(i => `<li>${i}</li>`).join("");
}

function placeOrder() {
  fetch("https://YOUR-BACKEND-URL/orders", {
    method: "POST",
    headers: { "Content-Type": "application/json" },
    body: JSON.stringify({ items: cart })
  })
  .then(res => res.json())
  .then(data => {
    alert("Order placed!");
    cart = [];
    renderCart();
  });
}
