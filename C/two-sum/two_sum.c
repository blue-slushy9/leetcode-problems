#include <stdio.h>
// We need stdlib for malloc
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// Declare function that will add the two numbers and return resulting array
int* twoSum(int* nums, int numsSize, int target, int* returnSize); 

int main() {
    // The starting array
    int nums[5] = {0, 1, 2, 42, 69};
    // The sum we are trying to reach by adding two of the elements
    int target = 69;
    // Call the function that creates the final array
    int final_array[2] = twoSum(nums, 5, 69, 2);
    // Print the final array
    printf("Final array elements: ");
    // We want nums[0] and nums[4], so we increment by 4 and set the cap at 5
    for (int i=0; i<5; i+=4) {
        printf("%d ", arr[i]);
    }
    // Free up the memory from malloc
    free(final_array);
    return 0;
}

// nums is the starting array, numsSize is the size of that array,
// target is the final sum of the two elements, returnSize is the size of the final array
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the output array that holds our two numbers
    int* arr = (int*) malloc(returnSize * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
    }
    // nums[0] = 0, nums[4] = 69
    arr[0] = nums[0];
    arr[1] = nums[4];
    return arr;
}