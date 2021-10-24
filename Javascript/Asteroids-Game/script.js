// alert("js loaded");
let startButton = document.querySelector(".start");
let restartButton = document.querySelector(".restart");
let box = document.querySelector(".box");
let canvas = document.querySelector(".board");
let tool = canvas.getContext("2d");
let scoreElement = document.querySelector("span");
let powerLevelElement = document.querySelector(".meter span");

// canvas size will be equal to window browser
canvas.width = window.innerWidth;
canvas.height = window.innerHeight;


let eHeight = 50;
let eWidth = 50;
let ePosx = canvas.width / 2 - 30;
let ePosy = canvas.height / 2 - 30;
let score = 0;
let fullPower = 100;

// load image through js

let spaceImage = new Image();
spaceImage.src = "space.png";
let earthImage = new Image();
earthImage.src = "earth.png";
let coronaImage = new Image();
coronaImage.src = "corona.png";

class Bullet {
    constructor(x, y, width, height, velocity) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
        this.velocity = velocity;
    }
    draw() {
        tool.fillStyle = "white";
        tool.fillRect(this.x, this.y, this.width, this.height);
    }
    update() {
        this.draw();
        this.x = this.x + this.velocity.x;
        this.y = this.y + this.velocity.y;

    }
}
class Corona {
    constructor(x, y, width, height, velocity) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
        this.velocity = velocity;
    }
    draw() {
        // tool.fillStyle = "white";
        tool.drawImage(coronaImage, this.x, this.y, this.width, this.height);
    }
    update() {
        this.draw();
        this.x = this.x + this.velocity.x;
        this.y = this.y + this.velocity.y;

    }
}

let bullets = [];
let coronas = [];
let particles = [];
class Planet {
    constructor(x, y, width, height) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }
    draw() {
        // draw logic
        tool.drawImage(earthImage, this.x, this.y, this.width, this.height)
    }
}

class Particle {
    constructor(x, y, radius, velocity) {
        this.x = x;
        this.y = y;
        this.radius = radius;
        this.velocity = velocity;
        this.alpha = 1;
    }
    draw() {
        tool.save();
        tool.globalApha = this.alpha;
        tool.beginPath();
        tool.fillStyle = "white";
        tool.arc(this.x, this.y, this.radius, 0, Math.PI * 2, false);
        tool.fill();
        tool.restore();
    }
    update() {
        this.draw();
        this.x = this.x + this.velocity.x;
        this.y = this.y + this.velocity.y;
        this.alpha -= 0.01;
    }
}
let animId;

function colRect(entity1, entity2) {
    let l1 = entity1.x;
    let l2 = entity2.x;
    let r1 = entity1.x + entity1.width;
    let r2 = entity2.x + entity2.width;
    let t1 = entity1.y + entity1.height;
    let t2 = entity2.y + entity2.height;
    let b1 = entity1.y;
    let b2 = entity2.y;
    if (l1 < r2 && l2 < r1 && t1 > b2 && t2 > b1) return true;
    return false;

}

function animate() {
    tool.clearRect(0, 0, canvas.width, canvas.height);
    tool.fillRect(0, 0, canvas.width, canvas.height);
    tool.drawImage(spaceImage, 0, 0, canvas.width, canvas.height)
    let earth = new Planet(ePosx, ePosy, eWidth, eHeight);
    earth.draw();
    // partcicles
    particles.forEach(function(particle, index) {
        if (particle.alpha <= 0) {
            setTimeout(() => {
                particles.splice(index, 1);
            }, 0);
        } else {
            particle.update();
        }
    });
    // For updating bullets
    let bLength = bullets.length;
    for (let i = 0; i < bLength; i++) {
        bullets[i].update();
        if (bullets[i].x < 0 || bullets[i].y < 0 || bullets[i].x > canvas.width || bullets[i].y > canvas.height) {
            setTimeout(function() {
                bullets.splice(i, 1);
            })
        }
    }
    let cLength = coronas.length;

    coronas.forEach(function(corona, i) {
        corona.update();
        let enemy = corona;
        // collision with earth
        if (colRect(earth, enemy)) {
            fullPower -= 20;
            powerLevelElement.style.width = `${fullPower}%`;
            coronas.splice(i, 1);
            if (fullPower == 0) {
                cancelAnimationFrame(animId);
                restart();
            }
        }
        bullets.forEach(function(bullet, bulletIndex) {
            if (colRect(enemy, bullet)) {
                // explosion
                for (let i = 0; i < enemy.width * 2; i++) {
                    particles.push(new Particle(bullet.x, bullet.y, Math.random() * 2, {
                        x: (Math.random() - 0.5) * (Math.random() * 6),
                        y: (Math.random() - 0.5) * (Math.random() * 6)
                    }))
                }
                setTimeout(() => {
                    coronas.splice(i, 1);
                    bullets.splice(bulletIndex, 1);
                    score += 100;
                    scoreElement.innerText = score;
                }, 0);
            }
        });

    });
    animId = requestAnimationFrame(animate);
}


function createCorona() {
    setInterval(function() {
        // console.log("Corona generated", Date.now());
        // Corona logic
        let x = Math.random() * canvas.width;
        let y = Math.random() * canvas.height;
        let delta = Math.random();
        if (delta < 0.5) {
            // Horizontal
            x = Math.random() < 0.5 ? 0 : canvas.width;
            y = Math.random() * canvas.height;
        } else {
            y = Math.random() < 0.5 ? 0 : canvas.height;
            x = Math.random() * canvas.width;
        }
        let angle = Math.atan2(canvas.height / 2 - y, canvas.width / 2 - x);
        let velocity = {
            x: Math.cos(angle) * 2,
            y: Math.sin(angle) * 2,
        }
        let corona = new Corona(x, y, 40, 40, velocity);
        coronas.push(corona);
    }, 1000);
}

startButton.addEventListener("click", function(e) {
    e.stopImmediatePropagation();
    // alert("start the game");
    // hide box
    box.style.display = "none";
    tool.fillRect(0, 0, canvas.width, canvas.height);
    tool.drawImage(spaceImage, 0, 0, canvas.width, canvas.height)

    // load space image
    // earth image


    let earth = new Planet(ePosx, ePosy, eWidth, eHeight);
    earth.draw();
    animate();
    createCorona();




    window.addEventListener("click", function(e) {
        // console.log(e);
        // console.log("mouse clicked");
        let angle = Math.atan2(e.clientY - canvas.height / 2, e.clientX - canvas.width / 2);
        let velocity = {
            x: Math.cos(angle) * 3,
            y: Math.sin(angle) * 3,
        }
        let bullet = new Bullet(canvas.width / 2 - 10, canvas.height / 2 - 10, 7, 7, velocity);
        bullet.draw();
        bullets.push(bullet);
    });
});

window.addEventListener("resize", function() {
    window.location.reload();
});

function restart() {
    restartButton.style.display = "block";
    startButton.style.display = "none";
    box.style.display = "flex";
    powerLevelElement.parentElement.style.display = "none";
    document.body.style.backgroundColor = "white";
    canvas.height = "0px";
    restartButton.addEventListener("click", function() {
        window.location.reload();
    });
}