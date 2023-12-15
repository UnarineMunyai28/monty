#include "monty.h"
/**
 * pint - prints the top
 * head: stack head
 * counter: line_number
 * Return: 0
 */
void pint(stack_t **stack, unsigned int line_number);
(
 {
	if (stack == NULL)
	{
		print_error(stderr, "ERROR: can't pint, stack emoty\n", counter)
                exit(EXIT_FAILURE);
	}
	)
	}
{
	stack = top = NULL;
	push(&stack, 1);
	pint(&stack);
	push(&stack, 2);
	pint(&stack);
	push(&stack, 3);
	pint(&stack);

	return 0;
}	
