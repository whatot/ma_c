/* spell.h */
#ifndef SPELL_H
#define SPELL_H

/* Define the maximum size for words in the dictionary. */
#define SPELL_SIZE 31

/* Public Interface */
int spell(char (*dictionary)[SPELL_SIZE], int size, const char *word);

#endif
