/* fact.c for recursion but not for effective */
#include "fact.h"

/* fact */
int fact(int n) {
	/* Compute a factorial recursively. */
	if (n < 0) {
		return 0;
	} else if (n == 0) {
		return 1;
	} else if (n == 1) {
		return 1;
	} else {
		return n * fact(n - 1);
	}
}
