'use strict';

const btn = document.querySelector('.btn-country');
const countriesContainer = document.querySelector('.countries');

///////////////////////////////////////
// console.log('Hi')
// const getCountry = function(country){
// const req =  new XMLHttpRequest();
// req.open('GET',`https://restcountries.com/v3.1/name/${country}`);
// req.send();

// req.addEventListener('load',function(){
// 	const [data]= JSON.parse(this.responseText);

// 	const html = `
// 		<article class="country">
//           <img class="country__img" src="${data.flags.png}" />
//           <div class="country__data">
//             <h3 class="country__name">${country}</h3>
//             <h4 class="country__region">${data.region}</h4>
//             <p class="country__row"><span>👫</span>${(+data.population/1000000).toFixed(2)}</p>
//             <p class="country__row"><span>🗣️</span>${data.languages.hin}</p>
//             <p class="country__row"><span>💰</span>${data.currencies.INR.name}</p>
//           </div>
//         </article>
// 	`
// 	countriesContainer.insertAdjacentHTML('beforeend',html);
// 	countriesContainer.style.opacity = 1;
// } )
// };

// // getCountry("India"	);
// function sha512(input) {
//       const hash = CryptoJS.SHA512(input);
//       return hash.toString(CryptoJS.enc.Hex);
// }

// let APIkey = `0bbabc56c7b7a3c2e84c16c7daec52788dcd3d04`;
// let secret = `45480342fe2ffbe9612abfb7ee09a7799090ff31`;
// let day = new Date();
// let time = Math.round(day.getTime()/1000);
// console.log("time",time);


// let code = "936854/user.friends?apiKey=" + APIkey + "&onlyOnline=true&time=" + time + "#" + secret;

// code = sha512(code); //Convert to SHA hash
// console.log(code);
// //time: time in unix format, remember to have it at max less than 5 minutes only
// let base_url = "https://codeforces.com/api/user.friends?apiKey=" + APIkey + "&onlyOnline=true&time=" + time + "&apiSig=936854" + code;


// const cf =  new XMLHttpRequest();
// cf.open('GET',`${base_url}`);
// cf.send();
// cf.addEventListener('load',function(){
// 			const data =JSON.parse(this.responseText);
// 				const myArray=data.result ;
// 				console.log(myArray);
// 				const table = document.getElementById('myTable');

// 				for (let i = 0; i < myArray.length; i++) {
// 				  const row = table.insertRow(i);
// 				  const cell = row.insertCell(0);
// 					cell.innerHTML = `<a href=https://codeforces.com/profile/${myArray[i]}>${myArray[i]}</a>`
// 		}

// } )


// what is promises : it is an objet that is used as

// placeholder for the future result of an asynchoronus operation
//promises : a container for an asynchronously delivered value 
//promise a container fo future value 

// we no longget need to rely on events and callbaks passed results 
// instead of nesting callbacks we can chain promises for a
// sequnce of operation escaping callback hell
const req = fetch('https://restcountries.com/v3.1/name/india');
console.log(req);
// Promise {<pending>}
//here promise is doing its task 
// when it ise settled (finesd task)
//we have two option fullfiled and rejected 

const  render=function(data){
	const html = `
		<article class="country">
          <img class="country__img" src="${data.flags.png}" />
          <div class="country__data">
            <h3 class="country__name">${data.altSpellings[0]}</h3>
            <h4 class="country__region">${data.region}</h4>
            <p class="country__row"><span>👫</span>${(+data.population/1000000).toFixed(2)}</p>
            <p class="country__row"><span>🗣️</span>${data.languages.hin}</p>
            <p class="country__row"><span>💰</span>${data.currencies.INR.name}</p>
          </div>
        </article>
	`
	countriesContainer.insertAdjacentHTML('beforeend',html);
	countriesContainer.style.opacity = 1;
}
/*
const getCountry = function(country){
		fetch(`https://restcountries.com/v3.1/name/${country}`)
		.then(function(res){
			console.log(res);
			return res.json();
		})
		.then(function(data){
			console.log(data[0]);
			render(data[0]);
		})
}
*/

const getCountry = (country)=>fetch(`https://restcountries.com/v3.1/name/${country}`)
		.then(res=> res.json())
		.then(data=>{render(data[0]);})



getCountry("india");
  