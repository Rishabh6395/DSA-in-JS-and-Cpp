
// let arr = new Array(3)
// arr[0] = 12;
// arr[1] = 13;
// arr[2] = 14;
// arr[6] = 20;

// console.log(arr)



// let arr = new Array(5)

// for(let i = 0; i<arr.length; i++){
//     arr[i] = Number(prompt("enter a value"))
// }
// console.log(arr)

// let arr = [10, 20, 30, 40, 50]
// let sum = 0;

// for(let i= 0; i<arr.length; i++){
//     sum = sum+arr[i]
// }
// console.log(sum)


// let arr = [11, 2, 3, 40, 34, 35, 3]
// let min = arr[0]

// for(let i =0; i<arr.length; i++){
//     if(min>arr[i]){
//         min = arr[i]
//     }
// }
// console.log(min)


let arr = [11, 2, 3, 40, 34, 35, 3]

let max = Math.max(arr[0], arr[1]) // 11
let sMax = Math.min(arr[0], arr[1]) // 2

for(let i = 2; i<arr.length; i++){
    if(arr[i] > max){
        sMax = max;
        max = arr[i]
    }
    else if(arr[i] > sMax && max !=arr[i]){
        sMax = arr[i]
    }
}
console.log(sMax)
