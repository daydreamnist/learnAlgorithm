#include <stdio.h>
#include <stdlib.h>

// http://blog.csdn.net/chenyufeng1991/article/details/50858926

typedef struct BTNode{
    int data;
    struct BTNode *lChild;
    struct BTNode *rChild;
}BiTNode;

int CreateBiTree(BiTNode **T)
{
    int ch;
    scanf("%d",&ch);
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
            printf("输入%d的左子节点：",ch);
            CreateBiTree(&((*T)->lChild));
            printf("输入%d的右子节点：",ch);
            CreateBiTree((&(*T)->rChild));
        }
    }

    return 1;
}
int main()
{
    BiTNode *T;
   // printf("请输入第一个节点的值，-1表示没有叶节点：\n");
    CreateBiTree(&T);
}
