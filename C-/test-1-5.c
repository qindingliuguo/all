//
// Created by 13129 on 2021/9/19.
//
#include <stdio.h>
int main()
{
    printf("%d\n",sizeof (char*));//ָ��Ĵ�С����ϵͳ�����ģ�32Ϊ��4���ֽڣ�64λ��8���ֽ�
    return 0;
}
/*int main()
{
    char pc='w';
    char*ph=&pc;//ָ��������Ǹ�����ָ��������Ͷ��ı��
    *ph='a';
    printf("%c",pc);
    return 0;
}*/
/*
int main()
{
    int a=10;//4���ֽ�
    int*p=&a;//��һ�ֱ�����������ŵ�ַ�����ֱ�����ָ���������Ϊint*
    //printf("%p\n",p);
    //printf("%p",&a);
    *p=20;//*��������ò�������*p�Ƕ�p���н����ò������ҵ�����ָ�Ķ���
    printf("%d",a);
    return 0;
}
*/
