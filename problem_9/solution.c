#include <stdio.h>

/*
 * 题目：按要求读入数据并输出
 * 
 * 题目描述：
 * 请编写程序从键盘读入数据，并按要求输出
 * 
 * 输入格式：
 * 第一行：两个整数，用逗号隔开
 * 第二行：两个浮点数，用空格隔开
 * 第三行：两个字母，每个字母前有一个空格，中间用逗号隔开
 * 
 * 输出格式：
 * 按照输入的原样输出，浮点数保留小数点后1位
 * 
 * 思路：
 * 1. 使用scanf读取第一行的两个整数（注意逗号格式）
 * 2. 使用scanf读取第二行的两个浮点数
 * 3. 使用getchar读取第三行（处理前导空格、字母、逗号、空格、字母）
 * 4. 按要求输出
 */

int main() {
    int a, b;
    double x, y;
    char c1, c2, comma, space;
    
    // 第一行：两个整数，逗号隔开
    scanf("%d,%d", &a, &b);
    
    // 消耗换行符
    getchar();
    
    // 第二行：两个浮点数，空格隔开
    scanf("%lf %lf", &x, &y);
    
    // 消耗换行符
    getchar();
    
    // 第三行：格式为" a, b"
    // 读取前导空格
    space = getchar();
    // 读取第一个字母
    c1 = getchar();
    // 读取逗号
    comma = getchar();
    // 读取空格
    space = getchar();
    // 读取第二个字母
    c2 = getchar();
    
    // 输出
    printf("%d,%d\n", a, b);
    printf("%.1f %.1f\n", x, y);
    // 注意：输出格式为" a, b"，逗号后有空格
    printf(" %c, %c\n", c1, c2);
    
    return 0;
}
