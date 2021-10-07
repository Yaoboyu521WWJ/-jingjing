#pragma once
//打印文件指定行数
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
void print(FILE* fp,int line)//打印指定行内容
{
    if (fp == NULL)
        perror("fopen");
    char s[255];
    for (int i = 0; i != line; i++)
        fgets(s, 256, fp);
    printf("%s", s);
}
int max(FILE* fp)//返回总行数
{
    int max;
    if (fp == NULL)
        perror("fopen");
    char s[255];
    for (int i = 0; fgets(s, 1000, fp) != NULL; i++)
        max = i ;
    return max;
}