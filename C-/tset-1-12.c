//
// Created by 13129 on 2021/9/27.
//
#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char pass[20]={0};//���������������
    for ( i = 0; i < 3; i++)//����ѭ�������ֻѭ������
    {
        printf("����������\n");
        fflush(stdout);
        scanf("%s",pass);//��ȡ���������
        if (strcmp(pass,"123456")==0)//==���������ж������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp��
        {
            printf("��¼�ɹ�");
            break;
        }
        else
        {
            printf("��½ʧ��\n");
        }
    }
    if(i==3)
    {
        printf("��������");
    }
    return 0;
}
//int main()
//{
//    char arr1[]="welcome to xinzhi!!";
//    char arr2[]="                   ";
//    int left=0;
//    //int right=sizeof (arr1)/sizeof (arr1[0])-2;//-2�������char���͵��������һ��Ԫ�ص��±�
//    int right= strlen(arr1)-1;//strlen�Ǽ�����������Ĳ������/0���Լ�һ�ͺ�
//    while (left<=right)//�������ѭ��������
//    {
//        arr2[left] = arr1[left];//��1������������±��Ԫ�ظ�ֵ��2������������±��Ԫ��
//        arr2[right] = arr1[right];//��1������������±��Ԫ�ظ�ֵ��2������������±��Ԫ��
//        printf("%s\n", arr2);
//        fflush(stdout);
//        Sleep(1000);//����ÿ���һ�εȴ�1000����
//        fflush(stdout);
//       // system("cls");//systemִ��ϵͳ���cls�����Ļ
//        left++;//��ֵ�������±�����һ�ͻ�����˳��ֵ
//        right--;//��ֵ�������±��Լ�1
//    }
//    return 0;
//}
//int main()//�۰�����㷨�����ַ�
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};//��������
//    int k=7;//����Ҫ���ҵı���
//    int sz=sizeof (arr)/sizeof (arr[0]);//���������С
//    int left=0;//���±��0��ʼ
//    int right=sz-1;//���±����������-1
//    while (left<=right)//ʹ��while��������ң�ֻ�����±�����±�Сʱ�ſ�ʼ���в��ң��Է������±꽻�������ѭ����
//    {
//        int mid=(left+right)/2;//����±��ƽ��ֵ��
//        if(arr[mid]>k)//ʹ��if����ж�ƽ��ֵ�Ƿ���ڱ�����
//        {
//            right=mid-1;//������ھ����¶������±�
//        }
//        else if(arr[mid]<k)//�ж��Ƿ�С�ڱ�������
//        {
//            left=mid+1;//��С�ھ����¶������±�
//        }
//        else
//        {
//            printf("�ҵ��ˣ��±�Ϊ��%d",mid);
//            break;
//        }
//
//    }
//    if(left>right)
//    {
//        printf("�Ҳ���");
//    }
//    return 0;
//}
//int main()//�����������ҵ�һ������
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};//��������
//    int k=7;//����Ҫ�ҵ������ְ�������ַŵ��Զ���ĳ�����
//    int i=0;//����ѭ����
//    int sz=sizeof (arr)/sizeof (arr[0]);//��������Ĵ�С
//    for (int i = 0; i < sz; i++)//����ѭ��
//    {
//        if(k==arr[i])//����if������k=arr��i����ִ�����д���
//        {
//            printf("hehe");
//            break;
//        }
//    }
//    return 0;
//}
//int main()//�Ż�����˽׺͵Ĵ���
//{
//    int i;
//    double red=1;
//    double sum=0;
//    for (int i = 1; i <= 3; i++)
//    {
//        red=red*i;
//        printf("%d!=%.2lf\n",i,red);
//        sum=sum+red;
//        printf("%lf\n",sum);
//    }
//
//
//    return 0;
//}

//int main()//����׳����
//{
//    int i,n;
//    double red=1;//�׳˵�λ��
//    double sum=0;//�׳˺͵�λ��
//    for (int n = 1; n <= 3 ; n++)//����ѭ��ÿѭ��һ��n����һ
//    {
//        red=1;//ÿ��ѭ����֮��Ҫ���¶���red��ֵ����Ļ��ϴ�ѭ���˽׵�ֵ�ᱣ����red��
//        for (int i = 1; i <=n ; i++)//����˽�ѭ��
//        {
//            red=red*i;//ÿ����˺��ֵ����red���Դﵽ1*2*3*n��Ч��
//        }
//        sum=sum+red;//ÿ��ѭ����˽׵�ֵ�����red���sum��ӽ�ֵ�����sum�Դﵽ���Խ�ÿ�γ˽׵�ֵ���
//    }
//    printf("%lf\n",sum);//���sum��ֵ
//    return 0;
//}
//int main()//����n�ĳ˽�
//{
//    int n,i;//��������
//    double red=1;
//    double sum=0;
//    scanf("%d",&n);//����Ҫ���˽׵���
//    for ( i = 1; i<=n ;i++)
//    {
//        red = red * i;//��red��i��˲�����red���ս���Դﵽ1*2*3*4��Ч��
//    }
//    printf("%d!=%lf\n", n, red);
//    return 0;
//}
//int main()
//{
//    int i=1;
//    do
//    {
//        fflush(stdout);
//        if(i==5)
//            continue;
//        printf("%d\n",i);
//        i++;
//    }
//    while (i<=10);//do whileѭ�����Ƚ���ѭ���ڽ����жϣ�do whileѭ������ѭ��һ��
//    return 0;
//}
//int main()
//{
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int i=10;
//    int a=2;
//    int c=i*a;
//    printf("����ɵ��");
//}
//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    printf("%d",arr[4]);
//    return 0;
//}
//int main()
//{
//    for (int i = 0; i <=10; i++)
//    {
//        if(5==i)
//            continue;
//            printf("%d",i);
//    }
//    return 0;
//}