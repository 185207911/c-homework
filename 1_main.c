// 202611716302
// 宋承轩

/* 题1：输入摄氏温度，输出对应华氏温度
 * 公式：F = C * 9 / 5 + 32
 */
#include <stdio.h>

int main(void)
{
    float c, f;

    if (scanf("%f", &c) != 1)
    {
        printf("输入无效\n");
        return 1;
    }

    f = c * 9.0f / 5.0f + 32.0f;
    printf("华氏温度 = %.1f\n", f);

    return 0;
}
