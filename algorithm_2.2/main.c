#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
//  阶乘之和
//    const int MOD = 1000000;
//    int i,j,n,s = 0;
//    scanf("%d",&n);
//    for(i = 1; i <= n; i++){
//        int factorial = 1;
//        for(j = 1; j <= i; j++){
//            factorial = (factorial * j % MOD);
//        }
//        s =(s + factorial) % MOD;
//    }
//    printf("%d\n",s );
//    printf("%lf\n",(double)clock()/CLOCKS_PER_SEC);

// 输出技巧

//    int i,n;
//    scanf("%d",&n);
//    for(i = 2; i <= n; i+=2){
//        printf("%d\n",i);
//    }

//double

//    double i;
//    for(i = 0; i != 10.0; i +=0.1){
//            printf("%.1lf\n",i);
//    }

//digit
//    int i,s,n = 10,d = 1;
//    scanf("%d",&i);
//    s = i/n;
//    while( s > 0){
//        n *= 10;
//        s = i/n;
//        d++;
//    }
//
//    printf("%d",d);

//  daffodil
//    int i = 100;
//    int g,s,b;
//    for( i; i < 1000; i++){
//        g = i%10;
//        s = i/10%10;
//        b = i/100;
//        if( i == g*g + s*s + b*b )
//            printf("2   %d\n",i);
//        if( i == g*g*g + s*s*s + b*b*b)
//            printf("3   %d\n",i);
//    }

//  hanxin

//    int a,b,c;
//    int flag = 0;
//    scanf("%d%d%d",&a,&b,&c);
//
//    for(int n = 10; n <= 100; n++){
//        if ( n%3 == a && n%5 == b && n%7 == c){
//            printf("%d",n);
//            flag = 1;
//        }
//    }
//
//    if( flag == 0)
//        printf("No answer");

    return 0;
}
