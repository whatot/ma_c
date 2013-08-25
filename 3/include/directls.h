/* directls.h */
#ifndef DIRECTLS_H
#define DIRECTLS_H

#include <dirent.h>

/* Define a structure for directory entries. */
typedef struct Directory_ {
	char name[MAXNAMLEN + 1];
} Directory;

/* Public Interface */
int directls(const char *path, Directory **dir);

#endif
