//
// Created by 13129 on 2021/9/20.
//
#include <stdio.h>
int main()
{
    int n=1;
    int m=2;
    switch (n)
    {
        case 1:
            m++;//1.3
        case 2://2.3
            n++;
        case 3:
            switch (n)//switch����Ƕ��ʹ��
            {
                case 1:
                    n++;
                case 2:
                    m++;//4
                    n++;//3
            }
        case 4:
            m++;
            break;
        default:
            break;
    }
    printf("%d\n%d",n,m);
    return 0;
}
/*
int main()
{
    int a=0;
    printf("���Ų�������ô�죿\n");
    printf("��ֻ������ѡ��\n");
    printf("1.���� 2.���� 3.��������\n");
    fflush(stdout);
    scanf("%d",&a);
    switch (a)//���ʽ����Ҫ������
    {
        case 1://case����ı��ʽ���������γ���
            printf("�������˸��ţ����ڸ��������ﶼ����");
            break;
        case 2:
            printf("����˸��������ƣ�����������ͽ��˼���\n������������\n����˵���������˶�����������\n�������Ļ�ϲ\n�������ǿ�ʼ�˿��ֵ�������\n������������������˼���");
            break;
        case 3:
            printf("��������Ů���ְ��͸��˸��ţ����ų��ײ�Ҫ����");
            break;
        default://default���ڴ������κ�λ�ö����ԣ�����������������
            printf("û��ѡ��\n");
            printf("����");
    }
    return 0;
}
*/

/*int main()
{
    int a=0;
    while (a<=1000)
    {
        if(a%2!=0)
        printf("%d\n",a);
        a++;
    }
    return 0;
}*/
/*int a=20;
int main()
{
    int a=30;
    printf("%d",a);
    return 0;
}*/
/*
int main()
{
    int a=0;
    scanf("%d",&a);
    if(a%2!=0)
        printf("����");
    else
        printf("ż��");
    return 0;
}
*/
/*int main()
{
    int age=0;
    scanf("%d",&age);
   if(age<=18&&age>=10)
    {//if���Ҫ�ٿض��ֵ�Ļ�����Ҫ�Ӵ�����ʹ���Ϊ�����
        printf("δ����");
        printf("��ǩi��Ϊ");
    }
    else if(age>=18&&age<=25)
        printf("����");
    if(age==1)//age��Ϊ1��if�ж�Ϊ�٣�������if���
        if(age==2)
            printf("hehe");
        else//elseֻ��ƥ�������δƥ���if���
            printf("haha");
    else
        printf("lele");

    return 0;
}*/
/*int main()
{
    //int ch=getchar();//����һ���ַ����͵�����
    //putchar(ch);//����ַ����͵�����

   char a=0;
    while (a=getchar()!=EOF)
    {
        putchar(a);
        //break;
    }
    return 0;
}*/
/*
int main()
{
    int i=1;
    while (i<=10)
    {
        i++;
        if(i==5)
            continue;//��ֹ����ѭ����continue�󷽴��벻��ִ�У�ֱ����ת��while�����жϲ���
        printf("%d",i);

    }

    return 0;
}
*/



