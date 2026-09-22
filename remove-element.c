int removeElement(int* nums, int numsSize, int val) {
    int writer = 0;
    for (int reader = 0; reader < numsSize; reader++) {
        if (nums[reader] != val) {
            nums[writer] = nums[reader];
            writer++;
        }
    }

    return writer;
}