//
// Created by 13129 on 2021/9/21.
//
#include <stdio.h>

//int main()
//{
//    int i=0;
//    int k=0;
//    for (i=0,k=0;k=0;i++,k++)//k=0�ǽ�0��ֵ����k��0Ϊ�٣�������ѭ��
//        k++;
//    return 0;
//}

//int main()
//{
//    int x,y;
//    for (x=0,y=0;x<2&&y<5;++x,y++)
//    {
//        printf("haha\n");
//    }
//
//    return 0;
//}
/*int main()
{
    int i=0;
    int j=0;

    //for (i=0; i < 10; i++)
    for (; i < 10; i++)//forѭ���ĳ�ʼ���屻ʡ�Ե��Ļ��ڣ�����ѭ��ʱ������Ա������г�ʼ����
                       //�Ӷ�����for��ѭ��ʱi�����󽫲��ᱻ��ʼ��
                       //forѭ�����ÿ���ṹ�嶼�����彨�鲻Ҫ���ʡ�Ե�
    {
        for (; j < 10; j++)
        {
            printf("hehe\n");
        }
    }
    return 0;
}*/
/*int main()
{
    for (;;)//forѭ���ĳ�ʼ�����жϣ�����������ʡ��
            //���ǣ�forѭ�����жϲ��������ʡ����ô�ж������ͺ�Ϊ�棬Ҳ����Ĭ��Ϊ��
            //���鲻Ҫ���ʡ��
    return 0;
}*/
/*int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    for (int i = 0; i < 10; i++)//����ǰ�պ�д������������
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}*/
/*int main()
{
    int i=0;
    for ( i = 0; i <10 ; i++)
    {
        if(i=5)//��5�������i����forѭ�����ڸøı���ѭ������
            //��ѭ�����ڲ��ɵ���ѭ������������ᵼ��ѭ�����ɿ�
            printf("haha\n");
        printf("hehe\n");
    }
    return 0;
}*/
/*int main()
{
    int i=0;
    for(i=1; i<=10; i++)//forѭ���Ļ����ܹ�for(exp1/��ʼ��/;exp2/�жϲ���/;exp3/��������/)
    {
        if(i==5)
            continue;//��������ѭ��continue����Ĵ���ת��forѭ���ĵ�������/
            // break;//����ѭ������whileѭ��һ��
        printf("%d",i);
    }
    return 0;
}*/
/*int main()
{
    int ch=0;
    while ((ch=getchar())!=EOF)
    {
        if(ch<'0'||ch>'9')
            continue;
        putchar(ch);
        fflush(stdout);
    }
    return 0;
}*/
/*int main()
{
    int ret=0;
    int ch=0;
    char password[20]={0};
    printf("��������\n");
    fflush(stdout);
    scanf("%s",password);
    while ((ch=getchar())!='\n')
    {
        ;//��ѭ��ֵ
    }
    printf("ȷ������");
    fflush(stdout);
    //getchar();
    ret=getchar();
    if(ret=='y')
    {
        printf("ȷ��\n");
    }
    else
    {
        printf("����\n");
    }

    return 0;
}*/
/*int main()
{
    int ch=0;
    while ((ch=getchar())!=EOF)//EOF������-1
    {
        fflush(stdout);
        putchar(ch);
    }
    //int ch=getchar();
    //    putchar(ch);
    //printf("%c",ch);
    return 0;

}*/
/*
int main()
{
    int i=1;
    while (i<=10)
    {
        if(i == 5)
            continue;//��ֹ����ѭ��continue�󷽵Ĵ��룬ֱ��ת����while�жϲ��ֽ����´�ѭ��
        //   break;//ֹͣѭ��������ѭ����������ֹѭ��
        printf("%d",i);
        fflush(stdout);
        i++;
    }
    return 0;
}*/
