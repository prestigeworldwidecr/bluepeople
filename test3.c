/*

Write a method or function that receives an array of integers and detects if every adjacent numbers have the same absolute difference.

Example:

sameDifference([ 1, 3, 5 ]); // true
sameDifference([ 194, 54, 23, 7, 3, 6, 8 ]); // false
sameDifference([ 44, 37, 30, 23 ]); // true
sameDifference([ -2.3, -1.1, 0.1, 1.3, 2.5, 3.7 ]); // true
sameDifference([ 1, 8 ]); // true
sameDifference([ 3, 2, 1, 2, 3, 4, 3]); // true

*/

#include <stdio.h>
#include <stdbool.h>

bool sameDifference(double arr [])
{
    int n = sizeof(arr);
    double a, b, c = 0.0;
    double diff = arr[1] - arr[0];

    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i + 1] - arr[i] == diff)
        {
            //
        }

        else
        {
            return false;
        }

    }
    
    return true;

}

int main()
{
    printf("Hello, World!\n");

    double arr [] = {1, 3, 5};  // true
    // double arr [] = { 194, 54, 23, 7, 3, 6, 8 }; // false
    // double arr [] = { 44, 37, 30, 23 }; // true
    // double arr [] = { -2.3, -1.1, 0.1, 1.3, 2.5, 3.7 }; // true
    // double arr [] = { 1, 8 }; // true
    // double arr [] = { 3, 2, 1, 2, 3, 4, 3}; // true

    bool b = sameDifference(arr);

    printf("%d", b);

    return 0;
    
}

/*

********
BONEYARD
********

// printf("%d", arr);
// printf("true");
// printf("false");

sameDifference(arr); // true
    sameDifference(); // false
    sameDifference({ 44, 37, 30, 23 }); // true
    sameDifference({ -2.3, -1.1, 0.1, 1.3, 2.5, 3.7 }); // true
    sameDifference({ 1, 8 }); // true
    sameDifference({ 3, 2, 1, 2, 3, 4, 3}); // true

// int arr [] = { 1, 3, 5 };
// printf("%f%s%f%s%f%s%f\n", a, " ", b, " ", c, " ", diff);
        // printf("%s%d%s%d%s%d\n", "!", i, " ", arr[i + 1], " ", arr[i]);
        // printf("%s%d%s%d%s%d%s%d%s%d\n", "! ", n, " ", (int) arr[1], " ", (int) diff, " ", (int) arr[2], " ", (int) sizeof(arr));
    // size_t n = (int) sizeof(arr) / (int) sizeof(arr[0]);
            printf("%f%s%f%s%f%s%f\n", a, " ", b, " ", c, " ", diff);

a = arr[i + 1];
        b = arr[i];
        c = a - b;
        // if (c == diff)

*/