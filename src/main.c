#include <stdlib.h> // librairie standard
#include <stdio.h> // librairie input/output
#include <stdbool.h> // librairie du type booléen
#include <assert.h> // librairie d'assertions
#include "lst.h"
#include "lst_elm.h"




int main() {
	int v;
	struct lst_t * L = new_lst();
	scanf( "%d", &v );
	while( v > 0 ) {
		cons(L,v);
		scanf("%d",&v);
	}
	print_lst(L);
	del_lst(L);
	return EXIT_SUCCESS;
}