/**
 * 给定一个 32 位有符号整数，将整数中的数字进行反转
 *
 * 例如：
 * 输入: 123
 * 输出: 321
 *
 * 思路：
 * 依次计算数字的每一位，然后乘上足够的 10 ，然后相加
 * 123 = ((0 * 10 + 3) * 10 + 2）* 10 + 1
 *
 * 存在问题：反转之后是否越界没有判断
 */
int reverse(int x) {
    bool negative = false;
    int result = 0;
    int absValue = x;

    if (x < 0) {
        negative = true;
        absValue = -x;
    }

    while (absValue != 0) {
        result = result * 10 + absValue % 10;
        absValue /= 10;
    }
    if (negative) {
        result = -result;
    }
    return result;

}