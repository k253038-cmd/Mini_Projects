const buttons = document.querySelectorAll(".box");
const body = document.querySelector("body");

buttons.forEach(function(button) {
  button.addEventListener('click', function(e) {
    console.log(e.target.id); // shows which color was clicked
    body.style.backgroundColor = e.target.id; // change page background
  });
});
