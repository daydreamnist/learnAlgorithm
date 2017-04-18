/*
*	实验三：构建二叉树极其遍历
*	要求：
*		1.根据读入的字符序列创建如上图的二叉树，读入的字符序列为：
*					ABC##DE#G##F###
*		2.在1的基础上，用三种遍历方式输出遍历字符序列
*
*
*	作者：杨洋	142062410323
*
*/

#include <stdio.h>
#include <malloc.h>


typedef struct BinaryTree{
	struct	BinaryTree *lchild, *rchild;
	char	data;
}BiTree,*Tree;


void CreateBiTree(Tree &T){
	char d;
	printf("data:");
	scanf("%c",&d);

	if(d =='#')
		T = NULL;
	else{
            T = (BiTree )malloc(sizeof(BiTree));
            if(!T)
                return 0;


            T->data = d;
            CreateBiTree(T->lchild);
            CreateBiTree(T->rchild);
	}
	return 1;
}


int main(){

	Tree T;
	CreateBiTree(T);

	return 0;
}
