let a , b ;
a =100 , b = 20 ;

function maxi(a , b){
	if(a>b)
		return a ;
	else 
	return b;
		
}

console.log(maxi(a,b));

let a1 , b1 ;
a1 =100 , b1 = 20 ;

// function maxei(a1 , b1){
// 	return a1>b1;		
// }

// console.log(maxei(a1,b1));

// // let input=15;
// // let input=5;
// // let input=3;
// let input=7;
// // let input='hello';



// const output =fizzBuzz(input);
// console.log(output);

// function fizzBuzz(input){
// 	if(Number.isInteger(input)){
// 		if(input%3 === 0 && input%5 === 0 )
// 			return 'FizzBuzz';
// 		else if(input%3 === 0 && input%5 != 0)
// 			return 'Fizz';
// 		else if(input%5 === 0 && input%3 != 0)
// 			return 'Buzz';
// 		else (input%3 !=0 && input%5 != 0)
// 			return input;
// 		}
// 	else
// 		return 'Not a number';

// }


// let inp = 73;
// console.log(checkspeed(inp));

// function checkspeed(speed){
// 	if(speed<=70){
// 		return 'OK';
// 	}
// 	else {
// 		let point = speed-70;
// 		point = Math.floor(point/5);
// 		if(point>=12){
// 				return "LISENCE SUSPENDED"
// 		}
// 		else{
// 			if(point===0)
// 				return "OK";
			
// 			return ("POINT :"+point);
// 		}
// 	}
// }



console.log(sumi(10));

function sumi(limit){
	let sum = 0;
	for(let i = 1 ; 3*i<=limit ; i++){
		sum+=3*i;
	}
	for(let i = 1 ; 5*i<=limit ; i++){
		sum+=5*i;
	}
	console.log(sum);
}



















