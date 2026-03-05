#include <stdio.h>
#include <math.h>

/*
 * 题目：求三角形面积
 * 
 * 题目描述：
 * 定三角形三条边的长度，求此三角形的面积。
 * 提示：海伦公式 S=sqrt(p*(p-a)*(p-b)*(p-c))，其中 p=(a+b+c)/2
 * 
 * 思路：
 * 1. 读取三角形三条边a, b, c
 * 2. 计算半周长 p = (a + b + c) / 2.0
 * 3. 使用海伦公式计算面积 area = sqrt(p * (p-a) * (p-b) * (p-c))
 * 4. 保留两位小数输出
 */

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.2f\n", area);
    return 0;
}
