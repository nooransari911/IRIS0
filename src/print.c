#include "head.h"


void print_bst (struct bst * arr) {
	int i = 0;


	printf ("\nas-is bst is:\n");
	for (i = 0; i < ME; i ++) {
		printf ("%d\t", arr -> data [i] -> key);
	}
}
