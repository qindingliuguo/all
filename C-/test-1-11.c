//
// Created by 13129 on 2021/9/25.
//
#include <stdio.h>
int main()
{
    char c1,c2,c3,c4,c5;
    c1=getchar();
    c2=getchar();//getchar����
    c3=getchar();
    c4=getchar();
    c5=getchar();
    printf("\n");
    putchar(c1+=4);//+=4����ASCII���ֵ
    putchar(c2+=4);
    putchar(c3+=4);//putchar���
    putchar(c4+=4);
    putchar(c5+=4);
    return 0;
}
//#include <stdio.h>
//int main()
//{
//    char c1,c2,c3,c4,c5;
//    int b=4;
//    c1='C';
//    c2='h';
//    c3='i';
//    c4='n';
//    c5='a';
//    printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
//    c1+=b;
//    c2+=b;
//    c3+=b;
//    c4+=b;
//    c5+=b;
//    putchar(c1);
//    putchar(c2);
//    putchar(c3);
//    putchar(c4);
//    putchar(c5);
//    printf("\n");
//    printf("������\n2011043\n");
//    return 0;
//}
//#include <math.h>
//int main()
//{
//    double r,n,p;
//    r=0.07;
//    n=10;
//    p= pow((1+r),n);//��ʾ�η�������ʾΪx��y�η���Ҫ�õ�ͷ�ļ�math.h
//    printf("�����ˣ�%.2lf\n",p);
//    printf("������\n2011043");
//    return 0;
//}
//int main()
//{
//    int a,b,s;
//    a=0;
//    b=0;
//    printf("������߳�a,b��ֵ\n");
//    fflush(stdout);
//    scanf("%d%d",&a,&b);
//    s=a*b;
//    printf("���Ϊ��%d\n",s);
//    printf("������\n2011043");
//    return 0;
//}