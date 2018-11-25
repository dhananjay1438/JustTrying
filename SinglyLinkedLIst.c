#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* root = NULL;
void addAtBegin() {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&new_node -> data);
    new_node -> next = NULL;
    if (root == NULL)
        root = new_node;
    else {
        new_node -> next = root;
        root = new_node;
    }
}
int main(void) {

    //This is just a single commnet!
    return 0;
}
