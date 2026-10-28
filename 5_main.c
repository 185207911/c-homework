// 202611716302
// 宋承轩

/* 题5：简易四则运算器
 * 输入格式：数1 运算符 数2，例如 3 + 5
 * 支持 + - * /，除数为 0 或不支持的运算符时报错
 */
#include <stdio.h>

int main(void)
{
    float a, b;
    char op;

    if (scanf("%f %c %f", &a, &op, &b) != 3)
    {
        printf("输入无效\n");
        return 1;
    }

    if (op == '+')
    {
        printf("%.2f\n", a + b);
    }
    else if (op == '-')
    {
        printf("%.2f\n", a - b);
    }
    else if (op == '*')
    {
        printf("%.2f\n", a * b);
    }
    else if (op == '/')
    {
        if (b == 0)
        {
            printf("错误：除数不能为 0\n");
        }
        else
        {
            printf("%.2f\n", a / b);
        }
    }
    else
    {
        printf("错误：不支持的运算符\n");
    }

    return 0;
}
