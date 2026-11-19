/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int newSize = numsSize * 2;
    int* results = malloc(newSize * sizeof(int));

    if (results == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i=0,k=numsSize ; i<numsSize && k<newSize ; i++, k++) {
        results[i] = nums[i];
        results[k] = nums[i];
    }

    *returnSize = newSize;
    return results;
}
