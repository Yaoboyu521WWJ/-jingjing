#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include"function.h"
int main()
{
	for (;;)
    {
        FILE* fp1,*fp2;
        fp1 = fopen("url.txt", "rb");
        int num = max(fp1);
        int c[4], Tline;
        srand((unsigned)time(NULL));
        c[0] = rand() % num + 1;
    jump:
        for (int i = 1; i <= 3; i++)
        {
            c[i] = rand() % num + 1;
            for (int j = 0; j < i; j++)
            {
                if (c[i] == c[j])
                    goto jump;
            }
        }
        Tline = c[rand() % 4];
        fp1 = fopen("url.txt", "r+");
        printf("图片为");
        print(fp1, Tline);
        fclose(fp1);
        for (int i = 0; i <= 3; i++)
        {
            printf("\%c.", i + 65);
            fp2 = fopen("name.txt", "r+");
            print(fp2, c[i]);
            printf("\n");
        }
        char input;
        input = getchar();
        getchar();
        if (c[input - 65] == Tline||c[input - 97] == Tline)
            printf("输入正确！\n");
        else
            printf("输入错误！\a\n");
    }
}
