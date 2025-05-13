function logError(message) {
    alert("Error: " + message);
}
function newSlider() {
    const slider = document.getElementById("image-slider");
    const images = slider.getElementsByTagName("img");
    const dots = document.getElementById("image-dots");
    const imageCount = images.length;
    let currentIndex = 0;
    let timer = null;
    const autoTime = 3000;
 
    // 创建圆点导航
    for (let i = 0; i < imageCount; i++) {
        const dot = document.createElement("li");
        dot.addEventListener("click", () => {
            showImage(i);
        });
        dots.appendChild(dot);
    }
    const dotElements = dots.getElementsByTagName("li");
    showImage(0);
    function showImage(index) {
        for (let i = 0; i < imageCount; i++) {
            images[i].classList.remove("active");
            dotElements[i].classList.remove("active");
        }
        images[index].classList.add("active");
        dotElements[index].classList.add("active");
        currentIndex = index;
    }
    function nextImage() {
        const nextIndex = (currentIndex + 1) % imageCount;
        showImage(nextIndex);
    }
    function startAuto() {
        timer = setInterval(nextImage, autoTime);
    }
    function stopAuto() {
        clearInterval(timer);
    }
    // 处理图片加载失败的情况
    for (let i = 0; i < imageCount; i++) {
        images[i].addEventListener('error', () => {
            images[i].addEventListener('error', () => {
    logError("图片加载失败: " + images[i].src);
});
        });
    }
    slider.addEventListener("mouseover", stopAuto);
    slider.addEventListener("mouseout", startAuto);
 
    startAuto();
}
window.onload = function () {
    newSlider();
};