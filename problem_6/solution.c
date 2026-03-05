#include <stdio.h>

/*
 * 题目：浮点数求和
 * 
 * 题目描述：
 * 求两个浮点数的和。
 * 
 * 思路：
 * 1. 读取两个浮点数a和b
 * 2. 计算和sum = a + b
 * 3. 使用printf的%.2f格式保留两位小数输出
 */

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2f\n", a + b);
    return 0;
}
