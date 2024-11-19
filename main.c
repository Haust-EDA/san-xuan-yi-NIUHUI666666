//请在下方输入你的代码：
    
#include<stdio.h>
#include<math.h>


int main()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d×%d=%-2d ", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}
/*如果i<=j就可以是倒三角*/
