// 202611716302
// 宋承轩

/* 题2：输入一个实数，判断它是正数、负数还是零 */
#include <stdio.h>

int main(void)
{
    float x;

    if (scanf("%f", &x) != 1)
    {
        printf("输入无效\n");
        return 1;
    }

    if (x > 0)
    {
        printf("正数\n");
    }
    else if (x < 0)
    {
        printf("负数\n");
    }
    else
    {
        printf("零\n");
    }

    return 0;
}
