#include "monty.h"
#include "lists.h"

/**
 * rotl_handler - Will handle the rotl instruction
 * @stack: Double pointer to the stack to push to
 * @line_number: Number of the line in file
 */
void rotl_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int num = 0;

	(void)line_number;

	if (*stack == NULL)
		return;
	temp = get_dnodeint_at_index(*stack, 0);
	num = temp->n;
	delete_dnodeint_at_index(stack, 0);
	add_dnodeint_end(stack, num);
}

/**
 * rotr_handler - Will handle the rotr instruction
 * @stack: Double pointer to the stack to push to
 * @line_number: Number of the line in the file
 */
void rotr_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int num = 0, len = dlistint_len(*stack);

	(void)line_number;

	if (*stack == NULL)
		return;
	temp = get_dnodeint_at_index(*stack, len - 1);
	num = temp->n;
	delete_dnodeint_at_index(stack, len - 1);
	add_dnodeint(stack, num);
}

/**
 * stack_handler - Will handle the stack instruction
 * @stack: Double pointer to the stack to push to
 * @line_number: Number of the line in file
 */
void stack_handler(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	data.qflag = 0;
}

/**
 * queue_handler - Will handle the queue instruction
 * @stack: Double pointer to the stack to push to
 * @line_number: Number of the line in file
 */
void queue_handler(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	data.qflag = 1;
}
