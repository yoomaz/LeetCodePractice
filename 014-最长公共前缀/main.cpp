/**
 * 最长公共前缀
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 * 如果不存在公共前缀，返回空字符串 ""。
 *
 * 例如：
 * 输入: 输入: ["flower","flow","flight"]
 * 输出: "fl"
 *
 * 思路：
 *
 */
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }
    string::size_type num = strs.size();
    string::size_type length = strs[0].length();
    for (int i = 0; i < length; ++i) {
        for (int j = 1; j < num; ++j) {
            if (i > strs[j].size() || strs[0][i] != strs[j][i]) {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];

}