// 202611716302
// 宋承轩

/* 题4：输入百分制成绩，输出等级 A/B/C/D/E
 * 90-100:A  80-89:B  70-79:C  60-69:D  0-59:E  其它:输入无效
 */
#include <stdio.h>

int main(void)
{
    float score;

    if (scanf("%f", &score) != 1)
    {
        printf("输入无效\n");
        return 1;
    }

    if (score < 0 || score > 100)
    {
        printf("输入无效\n");
    }
    else if (score >= 90)
    {
        printf("A\n");
    }
    else if (score >= 80)
    {
        printf("B\n");
    }
    else if (score >= 70)
    {
        printf("C\n");
    }
    else if (score >= 60)
    {
        printf("D\n");
    }
    else
    {
        printf("E\n");
    }

    return 0;
}
