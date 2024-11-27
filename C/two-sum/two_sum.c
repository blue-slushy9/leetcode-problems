/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Define loop limit for num1, we only need one less than the array size 
    // to cover all possible combinations
    int loop_limit = (numsSize - 1);
    // Define num1 for loop that will iterate over elements
    for (int i=0; i<loop_limit; i++) {
        // Define variable that will be starting point for num2, we need it to be
        // one more than i because we don't want to add the same element to itself
        int k = i + 1;
        // Iterate over nums[], start at k as defined above; we iterate over the 
        // entire span of nums[] to cover all possible combinations
        for (int j=k; j<numsSize; j++) {
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
}