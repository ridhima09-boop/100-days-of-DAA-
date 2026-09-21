#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void inorder(struct Node* root) {
    if (root == NULL)
        return;

    // LEFT
    inorder(root->left);

    // ROOT
    printf("%d ", root->data);

    // RIGHT
    inorder(root->right);
}

int main() {

    struct Node* root = createNode(4);

    root->left = createNode(2);
    root->right = createNode(6);

    root->left->left = createNode(1);
    root->left->right = createNode(3);

    root->right->left = createNode(5);
    root->right->right = createNode(7);

    printf("Inorder Traversal: ");
    inorder(root);

    return 0;
}
