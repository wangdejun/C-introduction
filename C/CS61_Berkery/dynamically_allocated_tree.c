#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int key;
  struct node *left;
  struct node *right;
}Node;

/**
 * parameters
 * ------------
 * int key 整数类型key
 * Node *left,
 * Node *right
 */
Node *create_node(int key, Node *left, Node *right){
  Node *np;
  if((np=malloc(sizeof(Node)))==NULL){
    printf("out of memry!\n");
    exit(1);
  }else{
    np->key = key;
    np->left = left;
    np->right = right;
    return np;
  }
}

void insert(int key, Node **tree){
  if((*tree)==NULL){
    (*tree)=create_node(key,NULL,NULL);
    return;
  }
  if(key<=(*tree)->key){
    insert(key, &((*tree)->left));
  }else{
    insert(key, &((*tree)->right));
  }
}

int main(void){
  Node *root = NULL;
  insert(10, &root);
  printf("%d",(*root).key);
  insert(16, &root);
  printf("%d",(*((*root).right)).key );
  insert(5, &root);
}
