#pragma once
//��ӡ�ļ�ָ������
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
void print(FILE* fp,int line)//��ӡָ��������
{
    if (fp == NULL)
        perror("fopen");
    char s[255];
    for (int i = 0; i != line; i++)
        fgets(s, 256, fp);
    printf("%s", s);
}
int max(FILE* fp)//����������
{
    int max;
    if (fp == NULL)
        perror("fopen");
    char s[255];
    for (int i = 0; fgets(s, 1000, fp) != NULL; i++)
        max = i ;
    return max;
}