/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Define loop limit for num1, we only need one less than the array size 
    // to cover all possible combinations
    int loop_limit = (numsSize - 1);
    // Define num1 for loop that will iterate over elements
    for (int i=0; i<loop_limit; i++) {
        // Define variable k that will be starting point for num2, we need it to be
        // one more than i because we don't want to add the same element to itself
        int k = i++;
        // Iterate over nums[], start at k as defined above; we iterate over the 
        // entire span of nums[] to cover all possible combinations
        for (int j=k; j<numsSize; j++) {
            // If num1 plus num2 equals target
            if (nums[i] + nums[j] == target) {
                // Allocate memory for the output array that holds our two numbers;
                // '*returnSize' dereferences the pointer to yield the value it points to
                int* arr = (int*)malloc((*returnSize) * sizeof(int));
                // Verify memory was successfully allocated
                if (arr == NULL) {
                    printf("Memory allocation failed.\n");
                    return NULL;
                }
                // Initialize array that will hold the two elements
                arr[0] = nums[i];
                arr[1] = nums[j];
                // Return the array that holds the two elements
                return arr;
            }
            /* Don't think we need 'else' because the for loop increases j automatically
            // If the two elements don't add up to target value
            } else {
                // Increase num2 by 1
                j++;
            }
            */
        }
    }   
}