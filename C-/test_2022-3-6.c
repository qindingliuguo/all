//
// Created by 13129 on 2022/3/4.
//
#include <stdio.h>
//int main()
//{
//    int i=1;
//    int a=(++i)+(++i)+(++i);//23
//    printf("%d\n",a);
//    return 0;
//}
//int main()
//{
//    int a=10;
//    int *p=&a;//ָ�����
//    return 0;
//}
//int main()
//{
//    printf("%d\n",sizeof (char *));
//    printf("%d\n",sizeof (short *));
//    printf("%d\n",sizeof (int *));
//    printf("%d\n",sizeof (double*));
//    return 0;
//}
//int main()
//{
//    int a=0x11223344;
//    int *pa=&a;
//    *pa=0;
////    char *pc=&a;
////    printf("%d\n",pa);
////    printf("%d\n",pc);
//    return 0;
//}
//int main()
//{
//    int a=0x11223344;
//    int *pa=&a;
//    char *pc=&a;
//    printf("%p\n",pa);
//    printf("%p\n",pa+1);
//    printf("%p\n",pc);
//    printf("%p\n",pc+1);
//    return 0;
//}
//int main()
//{
//    int arr[10]={0};
//    for (int i = 0; i < 10; i++) {
//        printf("%d\n",arr[i]);
//    }
//    int  * p = arr;
//    for (int i = 0; i < 10; i++) {
//        *(p+i)=1;
//        printf("%d\n",arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int a;//�ֲ���������ʼ����Ĭ��ֵ���
//    int *p;//�ֲ�ָ��������ͱ���ʼ�����ֵ
//    *p=20;//
//    return 0;
//}
//int main()
//{
//    int arr[10]={0};
//    int *p=arr;
//    for (int i = 0; i < 12; i++) {
//       p++;
//    }
//    return 0;
//}
int *test()
{
    int a=10;
    return &a;
}
int main()
{
    int*p=test();
    *p=20;
    return 0;
}