//
// Created by 13129 on 2021/9/19.
//

#include <stdio.h>
#include <string.h>
//struct //�ṹ��ؼ���
struct Book//��struct�ṹ��ؼ���������һ����
{
    char name[25];//��������
    int price;//����۸�
};
int main()
{
    struct Book b1={"��ְ����ͨѶ¼",4600};
    struct Book*pb=&b1;//����ָ��������Խṹ����в���
    //strcpy��ʾΪ�ַ�������ʹ��ʱҪ�õ��⺯��string.h
    strcpy(b1.name,"C++");//Ҫ�Խṹ���ڲ������Ա�޸�ʱ����ʹ��strcpy
    printf("%s\n",b1.name);
    //printf("%s\n",pb->name);//��ͷ������->���ṹ��ָ��ָ�����
    //printf("%s\n",(*pb).name);//����ָ�����������ṹ������
    //printf("%d\n",(*pb).price);
    //printf("������%s\n",b1.name);//������.���������ʽṹ������ҵ���Ա
    //printf("�۸�%d\n",b1.price);
    return 0;
}