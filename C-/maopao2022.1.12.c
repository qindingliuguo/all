//
// Created by 13129 on 2022/1/12.
//
#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
    for (int i = 0; i < sz-1; i++) {  //����ð�ݺ���Ҫ�ܼ���
        int flag=1;         //����һ����ʱ���������������Ƿ��Ѿ�����
        for (int j = 0; j < sz-1-i; j++) {  //����ÿ�˵�Ҫ�ȽϵĶ�����ÿ��һ�˶�������һ����һ��
            if(arr [j] > arr [j+1]){   //�жϵ�ǰ���Ƿ�ȵ�ǰ����λ������
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag=0;     //������ȫ�������������
            }
        }
        if(flag==1){
            break;
        }
    }
}
int main()
{
    int sz;
    //��arr������Ϊ����
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    //���������н�Ԫ�ظ��������
    sz=sizeof arr/sizeof arr[0];
    bubble_sort(arr,sz);
    for (int i = 0; i < sz; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}

