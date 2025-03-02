// Understanding Conditionals:

// Q8. Valid Voter:
// let age = "adfa";

// if(isNaN(age)) return console.log("Invalid input")
// else if(age>=18){
//     console.log("You can vote")
// }
// else{
//     console.log("You can not vote")
// }

// Q9. Shop discount

let amount = 12000
if(amount> 0 && amount <= 5000){
    console.log(amount)
} else if(amount > 5000 && amount <= 7000){
    console.log(amount - Math.floor((5*amount)/100))
} else if(amount > 7000 && amount <= 9000){
    console.log(amount - Math.floor((10*amount)/100))
} else if(amount > 9000){
    console.log(amount - Math.floor((20*amount)/100))
} else{
    console.log("Wrong input")
}


