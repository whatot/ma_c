/* facttail.c */
#include "facttail.h"

/* facttail */
int facttail(int n, int a) {
	/* Compute a factorial in a tail-recursive manner. */
	if (n < 0) {
		return 0;
	} else if (n == 0) {
		return 1;
	} else if (n == 1) {
		return a;
	} else {
		return facttail(n - 1, n * a);
	}
}
