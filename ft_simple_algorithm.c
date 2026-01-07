#include "ft_push_swap.h"


void simple_algorithm(t_stack *a, t_stack *b)
{
    (void)b;

    if (a->size == 2)
    {
        if (a->top->index > a->top->next->index)
            sa(a);
    }
    else if (a->size == 3)
        sort_three(a);
}

void sort_three(t_stack *a)
{
    int first = a->top->index;
    int second = a->top->next->index;
    int third = a->top->next->next->index;

    if (first > second && second < third && first < third)
        sa(a);
    else if (first > second && second > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);
}

int is_sorted(t_stack *stack)
{
    t_node *cur = stack->top;

    while (cur && cur->next)
    {
        if (cur->value > cur->next->value)
            return (0);
        cur = cur->next;
    }
    return (1);
}

