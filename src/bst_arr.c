#include "head.h"

int search_bst(struct bst *arr, int key) {
  int i = 0, j = 0, curr = 0;

  while (i < ME) {
    curr = arr->data[i]->key;

    if (curr > key) {
      j = i;
      i = (2 * i) + 1;
    }

    else if (curr < key) {
      j = i;
      i = (2 * i) + 2;
    }

    else {
      j = i;
      break;
    }
  }

  return j;
}




void insert_bst(struct bst *arr, struct record *data) {
  int i = 0, j = 0;
  struct record * curr = NULL;
  int key = data -> key;


  if (arr -> data [0] == NULL){arr -> data [0] = data;
    arr -> count ++;
    return;
  }

  
  while (i < ME) {
    curr = arr->data[i];
    
    if (curr == NULL) {
      break;
    }
    
    if (curr -> key > key) {
      j = i;
      i = (2 * i) + 1;
    }

    else if (curr -> key < key) {
      j = i;
      i = (2 * i) + 2;
    }

    else {
      return;
    }
  }


  arr -> data [i] = data;
  arr -> count ++;
  
}
