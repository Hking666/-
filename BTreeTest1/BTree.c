#include"BTree.h"

void CreatBiNode()
{
	BiNode node1 = { 'A', NULL, NULL };
	BiNode node2 = { 'B', NULL, NULL };
	BiNode node3 = { 'C', NULL, NULL };
	BiNode node4 = { 'D', NULL, NULL };
	BiNode node5 = { 'E', NULL, NULL };
	BiNode node6 = { 'F', NULL, NULL };
	BiNode node7 = { 'G', NULL, NULL };
	BiNode node8 = { 'H', NULL, NULL };


	node1.Lchild = &node2;
	node1.Rchild = &node6;
	node2.Rchild = &node3;
	node3.Lchild = &node4;
	node3.Rchild = &node5;
	node6.Rchild = &node7;
	node7.Lchild = &node8;

	RecursonBiNode(&node1);
}


void RecursonBiNode(BiNode* root)
{
	if (NULL == root)
	{
		return;
	}
	RecursonBiNode(root->Lchild);
	printf("%c",root->data);
	
	RecursonBiNode(root->Rchild);

}

