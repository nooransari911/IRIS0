#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define M 16
// M-way BTree;
// M links; M - 1 records;
#define ME ((M - 2) / 2)

#define RECORD_SIZE 20

typedef struct record {
  int key; // primary key;
} record;

typedef struct bst {
  struct record *data[ME];
  int count;
} bst;

typedef struct elle {
  struct bst *a, *b;
  struct elle *link[M];
  int count;
  int mark;

  struct elle *pare;
  int wh;
} elle;

typedef struct btree {
  struct elle *root;
} btree;

typedef struct stack_elle {
  struct elle *arr[RECORD_SIZE];
  int firstin;
  int lastin;
  int size;
} stack_elle;

// test0.c
void test0();


// init.c
struct record *init_record();
struct bst *init_bst();


//print.c
void print_bst (struct bst * arr);


// bst_arr.c
int search_bst(struct bst *arr, int key);
void insert_bst(struct bst *arr, struct record *data);
void print_bst(struct bst *arr);


