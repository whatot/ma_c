/* symbol.h */
#ifndef SYMBOL_H
#define SYMBOL_H

/* Define next_token for demonstration purposes. */
static char *next_token(const char *istream) {
	return 0;
}

/* Define a symbol structure for demonstration purposes. */
typedef struct Symbol_ {
	char               *lexeme;
	Token              token;
} Symbol;

#endif