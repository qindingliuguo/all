//
// Created by 13129 on 2021/9/29.
//
//#include <stdio.h>
//int main()
//{
//
//    for (int i = 100; i <=200 ; i++)
//    {
//        //����ֻ�ܱ�1��������
//        int j;
//        for ( j = 2; j < i ; j++)
//        {
//            if(i%j==0)
//            {
//                break;
//            }
//        }
//        if(j==i)
//        {
//            printf("%d\n",i);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int i=1;
//    int c=0;
//    for (int yeer = 1000; yeer <= 2000 ; yeer++)
//    {
//       if(yeer%4==0 && yeer%100!=0)
//        {
//            printf("%dX%d\n",yeer,i);
//            i++;
//            c++;
//        }
//        else if(yeer%400==0)
//        {
//            printf("%dX%d\n",yeer,i);
//            i++;
//            c++;
//        }
//        if (((yeer%4==0)&&(yeer%100!=0))||(yeer%400==0))
//        {
//            printf("%d\n",yeer);
//            c++;
//        }
//
//    }
//    printf("%d",c);
//    return 0;
//}
//int main()
//{
//    int m=0;
//    int n=0;
//    int r=0;
//    scanf("%d%d",&m,&n);
//    while (m%n)
//    {
//        r=m%n;//r��ֵΪm��n��ģ
//        m=n;//��n=18��ֵ��m
//        n=r;//�ٽ�r��ֵ��n��������m%n���Լ����������
//    }
//    printf("%d\n",r);
//    return 0;
//}
//int main()
//{
//    for (int i = 0; i <100 ; i++)
//    {
//        if(i%3==0)//%Ϊȡģ
//            printf("%d\n",i);
//
//    }
//    return 0;
//}
//int main()
//{
//    int a=0;
//    int b=0;//����Ҫ����С����Ķ���
//    int c=0;
//    scanf("%d%d%d",&a,&b,&c);//����Ҫ�����ֵ
//    if(a<b)//�ж�����ֵ�Ĵ�С��b����a�Ͱ���ֵ����
//    {
//        int tmp=a;//����һ���ձ�����a��ֵ�Ž�ȥ��ֱ�ӽ�����a��ֵ���Ϊ0
//        a=b;//��ʱa��ֵΪ�㣬��b��ֵ�����a��b��Ϊ��
//        b=tmp;//�ٽ�tmp��a����ֵ����b
//    }
//    if(a<c)
//    {
//        int tmp=a;
//        a=c;
//        c=tmp;
//    }
//    if(b<c)
//    {
//        int tmp=b;
//        b=c;
//        c=tmp;
//    }
//    printf("%d %d %d",a,b,c);
//    return 0;
//}