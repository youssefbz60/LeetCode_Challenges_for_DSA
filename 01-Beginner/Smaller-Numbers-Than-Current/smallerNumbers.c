/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* results = malloc(numsSize * sizeof(int));
    if (results == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i=0 ; i<numsSize ; i++) {
        int digits_less = 0;
        for (int j=0 ; j<numsSize; j++) {
            if ( nums[i]>nums[j] ) { 
                digits_less++;
            }
        }
        results[i] = digits_less;
    }

    *returnSize = numsSize;
    return results;
}
