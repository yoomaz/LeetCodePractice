/**
 * 给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
 * 不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
 *
 * 例如：
 * 输入: {1，1，2，3，3}
 * 输出: 3
 *
 * 思路：
 * 记录一个下标k，用 k 位置的元素和后面的元素比，如果不相同，k 的下一位(k+1) 就会被不同的数字替代
 */
int removeDuplicates(vector<int> &nums) {
    if (nums.empty()) {
        return 0;
    }
    size_t size = nums.size();
    int k = 0;
    for (int i = 1; i < size; ++i) {
        if (nums[k] != nums[i]) {
            k++;
            nums[k] = nums[i];
        }
    }
    nums.reserve(k+1);
    return k+1;

}