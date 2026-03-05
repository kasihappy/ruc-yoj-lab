#include <stdio.h>

/*
 * 题目：计算学分绩点
 * 
 * 题目描述：
 * 给定期末总评成绩，计算所得的学分绩点。
 * 
 * 绩点对照表（根据测试数据推断）：
 * 90-100: 4.0
 * 85-89: 3.7
 * 82-84: 3.3
 * 78-81: 3.0
 * 75-77: 2.7
 * 72-74: 2.3
 * 68-71: 2.0
 * 64-67: 1.7 (测试用例: 66 -> 1.7)
 * 60-63: 1.0
 * 0-59: 0
 * 
 * 思路：
 * 1. 读取成绩
 * 2. 使用if-else判断成绩范围
 * 3. 输出对应的绩点
 */

int main() {
    int score;
    scanf("%d", &score);
    
    if (score >= 90) {
        printf("4.0\n");
    } else if (score >= 85) {
        printf("3.7\n");
    } else if (score >= 82) {
        printf("3.3\n");
    } else if (score >= 78) {
        printf("3.0\n");
    } else if (score >= 75) {
        printf("2.7\n");
    } else if (score >= 72) {
        printf("2.3\n");
    } else if (score >= 68) {
        printf("2.0\n");
    } else if (score >= 64) {
        printf("1.7\n");
    } else if (score >= 60) {
        printf("1.0\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}
