#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
// ����Բ��������
//    const double pi = 4.0 * atan(1.0);
//    double r,l,s1,s2,s;
//    scanf("%lf%lf",&r,&l);
//
//    s1 = pi * r * r;
//    s2 = pi * 2 * r * l;
//
//    s = 2*s1 + s2;
//
//    printf("%.3lf",s);



//��ת��λ��
//    int n;
//    scanf("%d",&n);
//
//    printf("%d%d%d",n%10,n/10%10,n/100);


//��������

//    int a = 6 , b = 9;
//    printf("%d%d\n",a,b);
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("%d%d",a,b);


//����ͬ��

//    int cN , rN;    //�����õ�����
//    int s ,  l;     //������������
//    int flag = 0;
//
//    scanf("%d%d",&s,&l);
//
//    for( cN= 1; cN < (s+1); cN++){
//            rN = s - cN;
//        if(l == (cN*2 + rN*4)){
//            flag = 1;
//            printf("%d %d",cN,rN);
//        }
//    }
//
//    if(flag == 0){
//        printf("No answer");
//    }

//����ͬ�� ��һ�ַ���

    int c,r,s,l;
    scanf("%d%d",&s&l);

    c = (l*4-s)/2;
    r = s - c;

    if( l % 2 == 1 || c)
    return 0;
}
