
var n = 1457;
// var sum = 0;
// while(n>0){
//     var rem = n%10;
//     sum = sum+ rem;
//     n = Math.floor(n/10)
// }
// console.log(sum)


// reverse a no.

var rev = 0;
while(n>0){
    var rem = n%10;
    rev = rev*10 + rem;
    n = Math.floor(n/10)
}
console.log(rev)