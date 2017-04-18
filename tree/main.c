/*
*	ʵ�����������������������
*	Ҫ��
*		1.���ݶ�����ַ����д�������ͼ�Ķ�������������ַ�����Ϊ��
*					ABC##DE#G##F###
*		2.��1�Ļ����ϣ������ֱ�����ʽ��������ַ�����
*
*	���ߣ�����	142062410323
*
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct BTNode{
    char data;
    struct BTNode *lChild;
    struct BTNode *rChild;
}BiTNode;

int CreateBiTree(BiTNode **T)
{
    char ch;
    scanf("%c",&ch);
    if (ch == '#')
    {
        *T = NULL;
        return 0;
    }
    else
    {
        *T = (BiTNode *)malloc(sizeof(BiTNode));
        if (T == NULL)
        {
            printf("failed\n");
            return 0;
        }
        else
        {
            (*T)->data = ch;
            CreateBiTree(&((*T)->lChild));
            CreateBiTree((&(*T)->rChild));
        }
    }

    return 1;
}

void PreOrderBiTree(BiTNode *T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        printf("%c ",T->data);
        PreOrderBiTree(T->lChild);
        PreOrderBiTree(T->rChild);
    }
}

void MiddleOrderBiTree(BiTNode *T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        MiddleOrderBiTree(T->lChild);
        printf("%c ",T->data);
        MiddleOrderBiTree(T->rChild);
    }
}

void PostOrderBiTree(BiTNode *T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        PostOrderBiTree(T->lChild);
        PostOrderBiTree(T->rChild);
        printf("%c ",T->data);
    }
}

int main()
{
    BiTNode *T;


    CreateBiTree(&T);

    printf("���������������");
    PreOrderBiTree(T);
    printf("\n");

    printf("���������������");
    MiddleOrderBiTree(T);
    printf("\n");

    printf("����������������");
    PostOrderBiTree(T);
    printf("\n");
}
