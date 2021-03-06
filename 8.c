//给定数字从小到大排序
#include <stdio.h>
int main(void)
{
    int num;
    printf("输入数字个数：");
    scanf("%d", &num);

    int line[num + 1];
    line[0] = 0;
    for (int in = 1; in <= num; in++)
    {
        printf("输入第%d个数字：", in);
        scanf("%d", &line[in]);
    }

    printf("共%d个数字：", num);
    for (int in = 1; in <= num; in++)
    {
        printf("%d ", line[in]);
    }

    for (int count = 1;;)
    {
        if (line[count] < line[count - 1])
        {
            int temp;
            temp = line[count];
            line[count] = line[count - 1];
            line[count - 1] = temp;
            count--;
        }
        else
        {
            count++;
        }

        if (count > num)
            break;
    }

    printf("\n排序后：");
    for (int in = 1; in <= num; in++)
    {
        printf("%d ", line[in]);
    }

    return 0;
}