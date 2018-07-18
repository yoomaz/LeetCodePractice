/**
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
 * 如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 *
 * 例如：
 * 输入: [1,3,5,6], 5
 * 输出: 2
 *
 * 输入: [1,3,5,6], 2
 * 输出: 1
 *
 *
 *
 */

int searchInsert(vector<int> &nums, int target) {
    if (nums[0] > target) {
        return 0;
    }
    if (nums[nums.size() - 1] < target) {
        return nums.size() - 1;
    }
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == target) {
            return i;
        }
    }
    for (int j = 0; j < nums.size() - 2; ++j) {
        if (nums[j] > target && nums[j + 1] < target) {
            return j;
        }
    }
}