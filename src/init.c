#include "head.h"

struct record *init_record() {
  struct record *te0;
  int i = 0;

  te0 = (struct record *)malloc(sizeof(struct record));

  te0->key = 0;
  return te0;
}


struct bst *init_bst() {
  struct bst *new;
  int i;

  new = (struct bst *)malloc(sizeof(struct bst));

  for (i = 0; i < ME; i++) {
    new->data[i] = NULL;
  }
  new->count = 0;

  return new;
}
