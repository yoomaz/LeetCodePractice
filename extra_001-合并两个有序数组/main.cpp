/**
 * 合并两个有序的数组
 */

vector<int> arrayCombine(vector<int> &first, vector<int> &second) {
    auto it1 = first.begin();
    auto it2 = second.begin();

    vector<int> result;
    // 开始合并
    while (it1 != first.cend() && it2 != second.cend()) {
        if (*it1 < *it2) {
            result.push_back(*it1);
            it1++;
        } else {
            result.push_back(*it2);
            it2++;
        }
    }
    // 添加某一个数组剩下的元素
    while (it1 != first.cend()) {
        result.push_back(*it1);
        it1++;
    }
    while (it2 != second.cend()) {
        result.push_back(*it2);
        it2++;
    }
    return result;

}