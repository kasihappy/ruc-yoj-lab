#include <stdio.h>

/*
 * 题目：输出Hello world加强版
 * 
 * 题目描述：
 * 有史以来最常见第二简单的c语言程序题——输出n个"hello world"。
 * 
 * 思路：
 * 1. 读取整数n
 * 2. 使用for循环输出n次"hello world"
 * 3. 每次输出后换行
 */

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("hello world\n");
    }
    return 0;
}
