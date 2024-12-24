#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to construct a binary tree from an array
Node* constructTree(int arr[], int n, int index) {
    if (index >= n) {
        return NULL;
    }

    Node* root = createNode(arr[index]);
    root->left = constructTree(arr, n, 2 * index + 1);
    root->right = constructTree(arr, n, 2 * index + 2);

    return root;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* root = constructTree(arr, n, 0);
    printf("Tree constructed in level order:\n");
    Node* queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;

    while (front < rear) {
        Node* current = queue[front++];
        printf("%d ", current->data);

        if (current->left) {
            queue[rear++] = current->left;
        }

        if (current->right) {
            queue[rear++] = current->right;
        }
    }

    return 0;
}
