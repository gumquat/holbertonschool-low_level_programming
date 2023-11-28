#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* standard libraries go here */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* structs & typedefs go here */
/*
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node
 *
 * Description: single-linked list node structure
 * Description: struct skiplist_s blah blah blah blah blah
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* func PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

/* HELPERS */
skiplist_t *create_skiplist(int *array, size_t size);
void free_skiplist(skiplist_t *list);
void print_skiplist(const skiplist_t *list);
int calc_skip(skiplist_t *list);

#endif
