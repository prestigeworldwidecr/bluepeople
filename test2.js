/*

Write a method or function that receives an array and returns the largest difference between any pair of numbers in that array, regardless of their position.

Example:

majorDifference( [ 1, 1, 4 ] ) // 3
majorDifference( [ 9, 8 ] ) // 1
majorDifference( [ 6, 22, 16, 29, 23 ] ) // 23
majorDifference( [ 28, 16, 28, 11, 14, 26, 23, 25, 17, 3, 22, 23, 23, 10 ] ) // 25

*/

function majorDifference(arr) 
{
    let max = Math.max( ...arr );
    let min = Math.min( ...arr );

    return max - min;
}

/*

********
BONEYARD
********

console.log(majorDifference( [ 1, 1, 4 ] )) // 3
console.log(majorDifference( [ 9, 8 ] )) // 1
console.log(majorDifference( [ 6, 22, 16, 29, 23 ] )) // 23
console.log(majorDifference( [ 28, 16, 28, 11, 14, 26, 23, 25, 17, 3, 22, 23, 23, 10 ] )) // 25

*/