/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* results = malloc(numsSize * sizeof(int));
    if (results == NULL) {
        *returnSize = 0;
        return 0;
    }

    results[0] = nums[0];

    for (int i=1 ; i<numsSize ; i++) {
        results[i] = results[i-1] + nums[i];
    }
    *returnSize = numsSize;

    return results;
}
