// This is the fleshed-out version of my solution to the Leetcode problem, Two Sum

#include <stdio.h>
// We need stdlib for malloc
#include <stdlib.h>

// Declare function that takes the user input to create the nums array
int* createNums();

// Declare function that will add the two numbers and return resulting array
int* twoSum(int* nums, int numsSize, int target, int* returnSize); 

int main() {
    // Declare all variables we will need
    // The starting array
    int nums[5] = {0, 1, 2, 42, 69};
    int numsSize = 5;
    // The sum we are trying to reach by adding two of the elements
    int target = 69;
    // Size of final_array
    int returnSize = 2;
    // Call the function that creates the final array; we need '&returnSize'
    // because the format for that argument is 'int* returnSize', a pointer to an int
    int* final_array = twoSum(nums, numsSize, target, &returnSize);
    
    // Verify memory allocation was successful
    if (final_array == NULL) {
        // Exit if it was unsuccessful
        return 1;
    }
    
    // Print contents of final_array
    printf("Final array elements: ");
    // There are only two elements in this array
    for (int i=0; i<2; i++) {
        printf("%d ", final_array[i]);
    }
    // Blank line
    printf("\n");

    // Free up the memory from malloc
    free(final_array);
    return 0;
}

// Define function that allocates memory
int* createArr(int* length) {
    // Allocate memory for the output array that holds our two numbers;
    // '*length' dereferences the pointer to yield the value it points to
    int* arr = (int*)malloc((*length) * sizeof(int));
    // Verify memory was successfully allocated
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        // The output array will be empty since memory allocation failed
        *length = 0;
        return NULL;
    }
    // Else, if malloc was successful return the array that will store the elements
    return arr;
}

// Define function that takes the user input to create the nums array
int* createNums() {
    printf("Please enter the length of your array: ");
    int arr_length;
    scanf("%d", &arr_length);
    printf("You entered %d\n", arr_length);
    // Call function to allocate memory for the nums array
    createArr(&arr_length);
    // Initialize the nums array
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Define loop limit for num1, we only need one less than the array size 
    // to cover all possible combinations
    int loop_limit = (numsSize - 1);
    // Define num1 for loop that will iterate over elements
    for (int i=0; i<loop_limit; i++) {
        // Define variable k that will be starting point for num2, we need it to be
        // one more than i because we don't want to add the same element to itself
        printf("i before k: %d\n", i);
        int k = (i + 1);
        printf("i after k: %d\n", i);
        // Iterate over nums[], start at k as defined above; we iterate over the 
        // entire span of nums[] to cover all possible combinations
        for (int j=k; j<numsSize; j++) {
            // If num1 plus num2 equals target
            if (nums[i] + nums[j] == target) {
                // Allocate memory for the output array that holds our two numbers;
                // '*returnSize' dereferences the pointer to yield the value it points to
                int* arr = (int*)malloc(2 * sizeof(int));
                // Verify memory was successfully allocated
                if (arr == NULL) {
                    printf("Memory allocation failed.\n");
                    // The output array will be empty since memory allocation failed
                    *returnSize = 0;
                    return NULL;
                }
                // Initialize array that will hold the two elements
                arr[0] = i;
                arr[1] = j;
                // Set the size of the returned array
                *returnSize = 2;
                // DEBUG
                printf("i: %d\n", arr[0]);
                printf("j: %d\n", arr[1]);
                // Return the array that holds the two elements
                return arr;
            }
        }
    }  
    // If no solution is found
    // The output array will be empty since memory allocation failed
    *returnSize = 0;
    return NULL; 
}

/* Old version of this function
// nums is the starting array, numsSize is the size of that array,
// target is the final sum of the two elements, returnSize is the size of the final array
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the output array that holds our two numbers;
    // '*returnSize' dereferences the pointer to yield the value it points to
    int* arr = (int*)malloc((*returnSize) * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    // Initialize array
    // nums[0] = 0
    arr[0] = nums[0];
    // nums[4] = 69
    arr[1] = nums[4];
    return arr;
}
*/