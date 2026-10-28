// 202611716302
// 宋承轩

/* 题3：输入三条边长，判断能否构成三角形
 * 判定：任意两边之和大于第三边
 */
#include <stdio.h>

int main(void)
{
    float a, b, c;

    if (scanf("%f %f %f", &a, &b, &c) != 3)
    {
        printf("输入无效\n");
        return 1;
    }

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("能构成三角形\n");
    }
    else
    {
        printf("不能构成三角形\n");
    }

    return 0;
}
