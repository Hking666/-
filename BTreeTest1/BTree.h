#pragma once
#pragma warning (disable:4996)
#include<stdio.h>
#include<windows.h>

typedef char STDataType;

typedef struct BINODE
{
	STDataType data;
	struct BINODE* Lchild;
	struct BINODE* Rchild;
}BiNode;


void CreatBiNode();
void RecursonBiNode(BiNode* root);