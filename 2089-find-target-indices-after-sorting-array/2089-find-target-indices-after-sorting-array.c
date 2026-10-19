/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < target) {
            count1++;
        }
        else if (nums[i] == target) {
            count2++;
        }
    }

    *returnSize = count2;

    int* result = (int*)malloc(count2 * sizeof(int));

    for (int i = 0; i < count2; i++) {
        result[i] = count1 + i;
    }

    return result;
}