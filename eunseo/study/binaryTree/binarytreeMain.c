#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binarytree.h"

int main(void)
{
	treenode* bt1 = makenode(1); //1�̶�� ���� ���� Ʈ�� ��� bt1�� ����
	treenode* bt2 = makenode(17);
	treenode* bt3 = makenode(48);
	treenode* bt4 = makenode(5);
	treenode* bt5 = makenode(23);
	treenode* bt6 = makenode(37);
	treenode* bt7 = makenode(50);

	printf("%d \n", getData(bt1)); 


	setData(bt1, 30); //bt1�� Ʈ�� ��� ���� 30���� �缳��

	makeLeftSubTree(bt1, bt2); //bt1�� ���ʿ� bt2�� ����
	makeRightSubTree(bt1, bt3); //bt1�� �����ʿ� bt3�� ����
	makeLeftSubTree(bt2, bt4);// bt2�� ���ʿ� bt4�� ����
	makeRightSubTree(bt2, bt5); //bt2�� �����ʿ� bt5 ����
	makeLeftSubTree(bt3, bt6); //bt3�� ���ʿ� bt6���� 
	makeRightSubTree(bt3, bt7); //bt3�� �����ʿ� bt7����

	printf("%d\n", getData(bt1)); // bt1�� �� ��� -> 10
	printf("%d\n", getData(getLeftSubTree(bt1))); // bt1�� ���� Ʈ��(bt2)�� ���� ��� -> 20
	printf("%d\n", getData(getRightSubTree(bt1))); // bt1�� ������ Ʈ�� (bt3)�� ���� ��� -> 30
	printf("%d\n", getData(getLeftSubTree(getLeftSubTree(bt1)))); // bt4�� �� ���
	printf("%d\n", getData(getRightSubTree(getLeftSubTree(bt1)))); //bt5�� �� ���

	printf("���� ��ȸ : ");
	preorder(bt1);
	printf("\n");

	printf("���� ��ȸ : ");
	inorder(bt1);
	printf("\n");

	printf("���� ��ȸ : ");
	postorder(bt1);
	printf("\n");


	//bt1�� ���� Ʈ���� ����
	treenode* bt8 = makenode(50);
	treenode* bt9 = makenode(60);
	treenode* bt10 = makenode(70);
	makeLeftSubTree(bt8, bt9);
	makeRightSubTree(bt8, bt10);
	makeLeftSubTree(bt1, bt8);

	printf("���� ��ȸ : ");
	preorder(bt1);
	printf("\n");

	return 0;
}