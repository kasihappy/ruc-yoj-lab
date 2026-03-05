#include <stdio.h>

/*
 * 题目：比较两个整数的大小
 * 
 * 题目描述：
 * 比较给定两个整数的大小，并将较大的数输出。
 * 
 * 思路：
 * 1. 读取两个整数a和b
 * 2. 使用if语句比较大小
 * 3. 输出较大的那个数
 */

int main() {
    long long a, b;  // 使用long long以支持0~2^31的范围
    scanf("%lld %lld", &a, &b);
    if (a > b) {
        printf("%lld\n", a);
    } else {
        printf("%lld\n", b);
    }
    return 0;
}
