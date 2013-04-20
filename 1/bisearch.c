/* bisearch.c */
#include <stdlib.h>
#include <string.h>

#include "search.h"

/* bisearch */
int bisearch(void *sorted, const void *target, int size, int esize, 
	     int (*compare)(const void *key1, const void *key2))
{
	int left, middle, right;

	/* continue searching until the left and right indices cross. */
	left = 0;
	right = size - 1;
	while (left < right) {
		middle = (left + right) / 2;

		switch (compare(((char *)sorted + (esize * middle)), target)) {
		case -1:
		 /* prepare to search to the right of the middle index. */
			left = middle + 1;
			break;
		case 1:
		/* prepare to search to the left of the middle index. */	
			right = middle - 1;
			break;
		case 0:
		/* return the exact where the data has been found. */
			return middle;
		}
	}

	/* return that the data was not found. */
	return -1;
}
