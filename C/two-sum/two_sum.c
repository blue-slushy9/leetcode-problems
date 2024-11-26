/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Define loop limit for num1, we only need one less than the array size 
    // to cover all possible combinations
    int loop_limit = ((*numsSize) - 1);
    // Define num1 for loop that will iterate over elements
    for (int i=0; i<(*loop_limit); i++) {

    }
    // Iterate over nums[], start with 
    for (int j=1; j<numsSize; j++) {
        // If num1 plus num2 equals target
        if (nums[i] + nums[j] == target) {
            // Initialize array that will hold the two elements
            int arr[2] = {nums[i], nums[j]};
            // Return the indexes of the two elements
            return arr;
        }
        else {
            
        }
    }       
}