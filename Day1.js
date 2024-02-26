//  first 
let  marksWeight = 78 ; 
let  marksHeight = 1.69 ; 
let  JohnHeight = 1.95; 
let  JohnWeight = 92 ; 

function BMI(height , weight){
  const bmi = weight/(height*height)
    console.log(bmi)
};

let marks_bmi = BMI(marksHeight,marksWeight);
let John_bmi = BMI(JohnHeight,JohnWeight);

if(marks_bmi>John_bmi){
  console.log(`marks bmi is hight than jhones`);
}else{
  console.log(`jonses bmi is hight than marks`);
  
}
  


// 2 

// let bill_value = 275 ;
// let tip ;
// tip = bill_value>=50 && bill_value<=300 ?(bill_value*15)/100 :(bill_value*25)/100
// console.log(bill_value+tip);


//  challenge 
const calcAvg = (a,b,c) =>{ return (c+b+a)/3}; 
const teamScore1 = calcAvg(44,23,71) ;
const teamScore2 = calcAvg(65,54,49) ;

const checkWinner = (a,b) => a > (2*b);
if(checkWinner(teamScore1,teamScore2)){
    console.log("Team1");
} else if(checkWinner(teamScore2,teamScore1)){
    console.log("Team2"); 
}else{
    console.log("No team Winns "); 
}

// 
let bill_value = 275 ;
let tip ;
let bill =new Array(125,555,44)

let cacltip = (bill)=>{
  let ans=[];
  for(let i = 0 ; i < bill.length ; i++){
      tip = bill[i]>=50 && bill[i]<=300 ? (bill[i]*15)/100 : (bill[i]*20)/100;
      ans.push(tip+bill[i]);
     }
    return  ans  ;  
}
console.log(cacltip(bill));

// console.log(bill_value+cacltip(bill_value));
