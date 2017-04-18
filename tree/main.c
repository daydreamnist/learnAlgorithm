/*
*	实验三：构建二叉树极其遍历
*	要求：
*		1.根据读入的字符序列创建如上图的二叉树，读入的字符序列为：
*					ABC##DE#G##F###
*		2.在1的基础上，用三种遍历方式输出遍历字符序列
*
*	作者：杨洋	142062410323
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

    printf("先序遍历二叉树：");
    PreOrderBiTree(T);
    printf("\n");

    printf("中序遍历二叉树：");
    MiddleOrderBiTree(T);
    printf("\n");

    printf("后续遍历二叉树：");
    PostOrderBiTree(T);
    printf("\n");
}
