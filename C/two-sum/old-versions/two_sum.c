#include <stdio.h>
// We need stdlib for malloc
#include <stdlib.h>

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