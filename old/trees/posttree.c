#include <stdio.h>
#include <stdlib.h>
struct tree
{
	struct tree *left;
	struct tree *right;
	int x;
};
struct tree *makenode(int x)
{
	struct tree *root = malloc(sizeof(struct tree));
	root->x = x;
	root->left = root->right = NULL;
	return root;
}

struct tree *makeBST(int *post, int start, int n, int inorder)
{
	if (n <= 0)
		return NULL;
	int pivot = post[start + n - 1];
	struct tree *root = makenode(pivot);
	root->left = makeBST(post, start, pivot - 1 - inorder, inorder);
	root->right = makeBST(post, pivot - inorder - 1, n - (pivot - inorder), pivot);
	return root;
}
void preorder(struct tree *node)
{
	if (node == NULL)
		return;
	printf("%d ", node->x);
	preorder(node->left);
	preorder(node->right);
}
void printdot(struct tree *node, FILE *f)
{
	if (node == NULL)
		return;
	if (node->left != NULL)
	{
		fprintf(f, "%d -- %d;\n", node->x, node->left->x);
	}
	if (node->right != NULL)
	{
		fprintf(f, "%d -- %d;\n", node->x, node->right->x);
	}
	printdot(node->left, f);
	printdot(node->right, f);
}

int main()
{
	int i, n, *a;
	printf("Enter n: ");
	scanf("%d", &n);
	a = malloc(n * sizeof(int));
	printf("Enter post order traversal: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	struct tree *tree = makeBST(a, 0, n, 0);
	printf("Pre order traversal is : ");
	preorder(tree);
	printf("\n");
	FILE *f = fopen("tree.dot", "w");
	fprintf(f, "graph tree { \n");
	printdot(tree, f);
	fprintf(f, "}\n");
	fclose(f);

#if defined(__linux__) || (defined(__APPLE__) && defined(__MACH__) || (defined(__gnu_linux__)))
	system("dot -Tpng tree.dot -o output.png; eog output.png");
#endif
}