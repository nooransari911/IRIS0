#include "head.h"

void test0() {
  struct bst *arr;
  struct record * re [ME];
  int i, j, curr;


  arr = init_bst();
  for (i = 0; i < ME; i ++) {
    re [i] = init_record ();
    re [i] -> key = i + 1;
  }

  insert_bst(arr, re [3]);
  insert_bst(arr, re [2]);
  insert_bst(arr, re [4]);
  insert_bst(arr, re [0]);
  insert_bst(arr, re [1]);
  insert_bst(arr, re [5]);
  insert_bst(arr, re [6]);
  print_bst (arr);
}
