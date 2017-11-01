#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

/*
 * Creates a new node from a given value, allocating heap memory for it.
 */
node_t* make_tree(int val) {
  node_t* new_tree = malloc(sizeof(node_t));
  new_tree->val = val;
  new_tree->left = NULL;
  new_tree->right = NULL;
  return new_tree;
}

/*
 * Inserts a new value into a given binary search tree, allocating heap memory
 * for it.
 */
node_t* insert(int val, node_t* cur_root) {
  /* YOUR CODE HERE */\
  node_t *x = cur_root;
  node_t *pre;
  while(x != NULL){
    pre = x;
    if(x->val > val){
        x = x->left;
    }
    else{
        x = x->right;
    }
  }
  if(pre->val > val){
    pre->left = make_tree(val);

  }
  else{
    pre->right = make_tree(val);

  }

  return cur_root;

}

bool find_val(int val, node_t* root) {
  /* YOUR CODE HERE */
  node_t *temp = root;
  while(temp){
    if(temp->val == val)
        return 1;
    else if(temp->val < val){
        temp = temp->right;
    }
    else{
        temp = temp->left;
    }
  }
  return 0;
}

/*
 * Given a pointer to the root, frees the memory associated with an entire tree.
 */
void delete_bst(node_t* root) {
  /* YOUR CODE HERE */

  if(root != NULL){
    delete_bst(root->left);
    delete_bst(root->right);
  }
  free(root);
}

/* Given a pointer to the root, prints all o fthe values in a tree. */
void print_bst(node_t* root) {
  if (root != NULL) {
    printf("%d ", root->val);
    print_bst(root->left);
    print_bst(root->right);
  }
  return;
}

