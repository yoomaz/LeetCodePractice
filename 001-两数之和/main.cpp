/**
 * 给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
 * 你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
 *
 * 例如：
 * 输入: nums = [2, 7, 11, 15], target = 9
 * 因为 nums[0] + nums[1] = 2 + 7 = 9
 * 所以返回 [0, 1]
 *
 * 思路：
 * 1. 两次嵌套循环法
 * 2. 两遍哈希法
 * 3. 一遍哈希法
 *
 *
 */

/*
 * 解法1：两次循环暴力法
 */
vector<int> twoSum01(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size() - 1; ++i) {
        int first = nums[i];
        for (int j = i + 1; j < nums.size(); ++j) {
            int second = nums[j];
            int sum = first + second;
            if (sum == target) {
                vector<int> result = {i, j};
                return result;
            }
        }
    }
}

/*
 * 解法2：搭配 map，不嵌套两次循环
 */
vector<int> twoSum02(vector<int> &nums, int target) {
    map<int, int> num_map;
    for (int i = 0; i < nums.size(); ++i) {
        num_map.insert({nums[i], i});
    }
    for (int j = 0; j < nums.size(); ++j) {
        int key = target - nums[j];
        if (num_map.find(key) != num_map.end()) {
            if (num_map.find(key)->second != j) {
                vector<int> result = {j, num_map.find(key)->second};
                return result;
            }
        }
    }
}

/*
 * 解法3：搭配 map，不嵌套两次循环
 */
vector<int> twoSum03(vector<int> &nums, int target) {
    map<int, int> num_map;
    for (int i = 0; i < nums.size(); ++i) {
        int key = target - nums[i];
        if (num_map.find(key) != num_map.end() && (num_map.find(key)->second != i)) {
            vector<int> result = {num_map.find(key)->second, i};
            return result;
        } else {
            num_map.insert({nums[i], i});
        }
    }
}