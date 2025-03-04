// // Factors of number

// var inp = 12

// if(inp === null) console.log("Cancelled")

// else{
//     var n = Number(inp)

//     if(isNaN(n))console.log("Invalid Input")
//     else{
//         if(n>0){
//             for(var i =1; i<=Math.floor(n/2); i++){
//                 if(n%i === 0){
//                     console.log(i)
//                 }
//             }
//             console.log(n)
//         }
//         else{
//             console.log("Should be +ve and more than 0")
//         }
//     }
// }



// Q. Prime Number;
var inp = 7

if(inp === null) console.log("Cancelled")

else{
    var n = Number(inp)

    if(isNaN(n))console.log("Invalid Input")
    else{
        if(n>0){
            // var primeHai = true;
            // for(var i = 2; i<= Math.floor(n/2); i++){
            //     if(n%i === 0){
            //         primeHai = false
            //         break
            //     }
            // }
            // console.log(primeHai)

            console.log(isPrime(n))
        }
        else{
            console.log("Should be +ve and more than 0")
        }
    }
}

function isPrime(n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(let i =3; i<=Math.floor(Math.sqrt(n)); i+=2){
        if(n%i==0) return false
    }
    return true;
}
// 37 = 6 =   2,3 ->0