'use strict'





//make some types of variables accessible/ usable in the code before they 
// are actually declared

console.log(testing); 
// const testing ="Test "; // not hoisted
var testing ="Test "; // yes but printed undefined 





function calcAge(birthYEar){
	const age = 2037 -birthYEar;
	// console.log(age);
	// console.log(firstName); doesNot give error 

	//2
	function printAge(){
		// age and birthyear is avalaible to inside function 
		//  since it can acess its parent and global score variable 
		

		let output = `you are ${age}, born in ${birthYEar}`;
		console.log(output);
		
		if(birthYEar>=1981 && birthYEar<=1996){
				// here i can again declare first name again 
				const firstName ='New Mayank';
				var myFrind ='raj';
				const str =`Oh and you r a millenial , ${firstName}`
				console.log(str );
				output ='NewOutput'; //changed output
		}
		console.log(output+" Changed OUtput insde if ");
		console.log('');
		console.log(myFrind+" Inside printAge"); //var is avalable to any where in print age function  
		
		// here we cant acess str since block code not acessible 
		
	}
	// console.log(myFrind); not able to acess

	printAge();
	return age ;
	
	
	
}
const firstName = 'Mayank'; // globally available 
							//  can be acessed in all the function 

calcAge(1991);
//here age variable is not acessible  since 
// printAge() this also we cant call 

// console.log(myFrind); not able to acess 

