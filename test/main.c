#include <stdio.h>
#include <malloc.h>

typedef struct dxs{
    float coe;
    int exp;
    struct dxs *pNext;
}DXS,*PDXS;

PDXS creat_dxs();
void traverse(PDXS pHead);
PDXS add(PDXS Da, PDXS Db);

int main (void){
    PDXS D1 = creat_dxs();
    traverse(D1);

    PDXS D2 = creat_dxs();
    traverse(D2);

    printf("\n两多项式之和为：");
    PDXS Dj = add(D1, D2);
    traverse(Dj);

   // return 0;

}

PDXS creat_dxs(){
    PDXS pHead = (PDXS)malloc(sizeof(DXS));
    pHead->pNext = NULL;

    PDXS pTail = pHead;
    PDXS pNew = NULL;

    int len;
    float c;
    int e;
    int i;

    printf("输入多项式的项数：len = ");
    scanf("%d",&len);

    for(i = 0; i < len; i++){
        printf("分别输入第%d项的系数c、指数e：",i+1);
        scanf("%f%d",&c,&e);

        pNew = (PDXS)malloc(sizeof(DXS));
        pNew->coe = c;
        pNew->exp = e;
        pNew->pNext = NULL;

        pTail->pNext =pNew;
        pTail = pNew;
    }
    return pHead;

}

void traverse(PDXS pHead){

    PDXS p = pHead->pNext;
    while(p != NULL){
        printf("(%.2fX^%d)  ",p->coe,p->exp);
        p = p->pNext;
    }
    printf("\n");
}

PDXS add(PDXS Da, PDXS Db){
    PDXS Dj = (PDXS)malloc(sizeof(DXS));
    Dj->pNext = NULL;
    PDXS pTail = Dj;

    PDXS Dah = Da->pNext;
    PDXS Dbh = Db->pNext;

    while(Dah && Dbh){
        if(Dah->exp < Dbh->exp){
            pTail->pNext = Dah;
            pTail = Dah;

            Dah = Dah->pNext;
        }
        else if(Dah->exp > Dbh->exp){
            pTail->pNext = Dbh;
            pTail = Dbh;

            Dbh = Dbh->pNext;
        }

        else {
            if(0 != (Dah->coe + Dbh->coe)){
                Dah->coe = Dah->coe + Dbh->coe;
                pTail->pNext = Dah;
                pTail = Dah;
            }

            Dah = Dah->pNext;
            Dbh = Dbh->pNext;
        }
    }

    if(Dah != NULL){
        pTail->pNext = Dah;
    }
    if(Dbh != NULL){
        pTail->pNext = Dbh;
    }

    return Dj;
}
