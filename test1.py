'''

Write a method or function that detects if a number is repeated inside an array, at least X number of times. The function must receive: an array, the number being searched, and the number of minimum occurrences.

Example: 
for the following array: [4, 5, 2, 4, 5, 9, 9, 4, 4]
contains(array1, 4, 5) // Returns false;
contains(array1, 4, 4) // Returns true;
contains(array1, 4, 3) // Returns true;
contains(array1, 9, 2) // Returns true;

'''

def contains(arr, num, min_occurrences) :
# {
    return arr.count(num) >= min_occurrences
# }

'''

***** BONEYARD *****

array1 =  [4, 5, 2, 4, 5, 9, 9, 4, 4]

print(contains(array1, 4, 5)) # Returns false;
print(contains(array1, 4, 4)) # Returns true;
print(contains(array1, 4, 3)) # Returns true;
print(contains(array1, 9, 2)) # Returns true;

# print(arr.count(num))
    # None

    count = 0

    for i in arr :
    # {
        if (i == num) :
        # {
            count = count + 1
        # }
    # }

    return count >= min_occurrences

'''