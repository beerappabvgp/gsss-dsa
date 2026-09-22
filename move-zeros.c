void moveZeroes(int* nums, int numsSize) {
    int writer = 0;
    for (int reader = 0; reader < numsSize; reader++) {
        // whether element is zero or non zero
        if (nums[reader] != 0) {
            nums[writer] = nums[reader];
            writer++;
        }
    }

    for (int i = writer; i < numsSize; i++) {
        nums[i] = 0;
    }
}