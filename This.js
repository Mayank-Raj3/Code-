'use strict'
// 1.this Keyword : special variable that is created for every 
// execution context
 
// 2.this is not static . It depends on how the finction is called 
// and its value is only assigned when the function is actually
// called

// Method this =<objetc that is calling th method >
// const jonas ={
// 	name : 'jonas',
// 	year: 1989,
// 	calcAge: function(){
// 		return 2023- this.year;
// 	}
// };

// arraow finction will not get this 
// even Listner this =<DOM element that the handler is attached to >
// console.log(jonas.calcAge());


console.log(this); //we get the window object 

const calcAge = function(birthYear){
	console.log(2037-birthYear);
	console.log(this);
	/*
	->>In strict mode it will point to undifined 
	->>In snoppy mode it points to the window obj 
	*/
}
calcAge(20);


// This in arrow function
const calcAgeArrow = (birthYear)=>{
	console.log(2037-birthYear);
	console.log(this);
	/*
	In arrow function it uses Lexical this keyword 
	here window for global scope
	*/
}
calcAgeArrow(1889);

const jonas ={
	name : 'jonas',
	year: 1989,
	calcAge: function(){
		console.log(this)
	}
};

jonas.calcAge();

const matilda ={
	year : 2017,
};

matilda.calcAge=jonas.calcAge;
matilda.calcAge();
console.log(matilda);

// this  always points to that who calls the method here matidila is calling 
// sp calcage will be 20 ;

