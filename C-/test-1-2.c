//
// Created by 13129 on 2021/9/18.
//
#include <stdio.h>
#include <string.h>
int main()
{
    int line=0;
    printf("������ְ\n");
    while (line<=20000)
    {
        printf("��һ�д���%d\n",line);
        line++;
    }
    if(line>20000)
        printf("�ù���\n");
    printf("������\n");
    printf("�������ӣ����ϻ��ӣ������Ӱ���\n");
    printf("Բ���ȹ���������ʳ����\n");
    printf("�ɴ˿ɼ��������д����ҹ����������縻�Ŷ���Ļ���һЦ");

    return 0;
}


/*
int main()
{
    int input=0;
    printf("������ְ\n");
    printf("��Ҫ�ú�ѧϰ��?\n");
    fflush(stdout);
    scanf("%d",&input);
    if(input==1)
        printf("����ɵ�ƣ���Ϊ��ѡ������ְ����������ɵ��");
    else
        printf("�ؼ����ޣ��Ϻ�ѧУ");

    return 0;

}
*/
