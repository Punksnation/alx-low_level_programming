#ifndef CALC_H
#define CALC_H
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int val1, int val2);
} op_t;

int op_add(int val1, int val2);
int op_sub(int val1, int val2);
int op_mul(int val1, int val2);
int op_div(int val1, int val2);
int op_mod(int val1, int val2);
int (*get_op_func(char *s))(int, int);

#endif
