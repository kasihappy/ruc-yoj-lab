#include <stdio.h>

/*
 * 题目：读入字符串并输出
 * 
 * 题目描述：
 * 读入一段连续的字符串，将其输出。
 * 
 * 思路：
 * 1. 使用字符数组存储字符串
 * 2. 使用scanf读取字符串
 * 3. 使用printf输出字符串
 */

int main() {
    char str[105];  // 长度小于100，留一些余量
    scanf("%s", str);
    printf("%s\n", str);
    return 0;
}
