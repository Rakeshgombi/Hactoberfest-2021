alert('Please click on ASKME SEARCH button for search. ThankYou');

let query = document.querySelector('.query');
let searchBtn = document.querySelector('.searchBtn');

searchBtn.onclick = function(){
    let url = 'https://www.google.com/search?q=' +query.value;
    window.open(url,'_self');
}

// function enter(){
//     let url = 'https://www.google.com/search?q=' +query.value;
//     window.open(url,'_self');
// }

// query.addEventListener('keyup', (e)=>{
//     if(e.keycode===13){
//      enter();
//     }
// })