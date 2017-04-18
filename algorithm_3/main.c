#include <stdio.h>
#include <stdlib.h>

void result(int num, int *s_add, int *s_mul){

        int i = num/100;
        int j = num/10%10;
        int k = num%10;

        *s_add = *s_add + i + j + k;
        *s_mul = *s_mul * i * j * k;
    }


int main()
{
    int s = 1;

    for(int a = 1; a < 10; a++){
            s *=a;
    }

    for(int i = 123; i < 987/3; i++ ){

        int j = i*2;
        int k = i*3;

        int sAdd = 0;
        int sMul = 1;

        result(i,&sAdd,&sMul);
        result(j,&sAdd,&sMul);
        result(k,&sAdd,&sMul);

        if(sAdd == 45 && sMul == s){
            printf("%d\t%d\t%d\n",i,j,k);
        }
    }

    return 0;
}
