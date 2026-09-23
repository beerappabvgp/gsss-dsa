int searchHelper(int* nums, int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int mid = (left + right) / 2;
    if (nums[mid] == target) {
        return mid;
    }

    if (target > nums[mid]) {
        return searchHelper(nums, mid + 1, right, target);
    } else {
        return searchHelper(nums, left, mid - 1, target);
    }
}


int search(int* nums, int numsSize, int target) {
    return searchHelper(nums, 0, numsSize - 1, target);
}
