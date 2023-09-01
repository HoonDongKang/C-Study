#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"

treenode* makenode(Data value) //Ʈ���� ��带 ����� �Լ�
{
	treenode* node = (treenode*)malloc(sizeof(treenode));
	node->left = NULL;
	node->right = NULL;
	node->data = value;
	return node;
}
Data getData(treenode* t)//Ʈ���� data���� �������� �Լ�
{
	return t->data;
}
void setData(treenode* t, Data data) //Ʈ����� t�� data���� �������ִ� �Լ�
{
	t->data = data;
}

treenode* getLeftSubTree(treenode* t) //Ʈ������� ���� Ʈ���� �����ϴ� �Լ�
{
	return t->left;
}
treenode* getRightSubTree(treenode* t) //Ʈ������� ������ Ʈ���� �����ϴ� �Լ�
{
	return t->right;
}

void makeLeftSubTree(treenode* mainTree, treenode* sub) //mainTree�� ���ʿ� sub Ʈ���� �����ϴ� �Լ�
{
	if (mainTree->left != NULL)
	{
		//free(mainTree->left);
		delTree(mainTree->left); //���� Ʈ�� ��� ����
	}
	mainTree->left = sub;
}

void makeRightSubTree(treenode* mainTree, treenode* sub) //mainTree�� �����ʿ� sub Ʈ���� �����ϴ� �Լ�
{
	if (mainTree->right != NULL)
	{
		//free(mainTree->right);
		delTree(mainTree->right);
	}
	mainTree->right = sub;
}

void preorder(treenode* t) //���� : root -> left -> right
{
	if (t == NULL)
	{
		return;
	}
	printf("%d ", t->data);
	preorder(t->left);
	preorder(t->right);
}
void inorder(treenode* t) //���� : left -> root -> right
{
	if (t == NULL)
	{
		return;
	}
	inorder(t->left);
	printf("%d ", t->data);
	inorder(t->right);
}
void postorder(treenode* t) //���� : left -> right -> root
{
	if (t == NULL)
	{
		return;
	}
	postorder(t->left);
	postorder(t->right);
	printf("%d ", t->data);
}

void delTree(treenode* t)
{
	if (t == NULL)
		return;
	delTree(t->left);
	delTree(t->right);
	printf("delete : %d \n", t->data);
	free(t);
}