//
// Created by 13129 on 2021/9/19.
//

#include<stdio.h>
#include<string.h>
int main()
{
    int n=1;
    int m=2;
    switch (n)
    {
        case 1:
            m++;
        case 2:
            n++;
        case 3:
            switch (n)
            {
                case 1://n������1��������case1ִ��case2
                    n++;
                case 2:
                    m++;
                    n++;
            }
        case 4:
            m++;
            break;
        default:
            break;
    }
    printf("m=%d\nn=%d",m,n);//5,4//2,3
}
/*
int main()
{
    int day=0;
    int n=1;
    scanf("%d",&day);
    switch (day)//switch case���switch(���������α��ʽ) case(���γ������ʽ)
    {
        case 1:
            printf("����һ");
            break;//break����ѭ��
        case 2://switch��һ�ָ�Чд��
        case 3:
        if(1==n)//switch�����Գ���if���
            printf("hehe");
        case 4:
        case 5:
            printf("������");
            break;
        case 6:
        case 7:
            printf("��Ϣ��");
            break;
        default://�б�Ƿ�״̬���б�switch����ܷ�ƥ��������
            printf("�������");
            break;
    }
    return 0;
}*/
