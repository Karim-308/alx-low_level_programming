#define _POSIX_C_SOURCE 200809L
#include "monty.h"
#include <unistd.h>
#include <string.h>

stack_t *head = NULL;

void push(stack_t **stack, unsigned int line_number, int n) {
    stack_t *new;
(void) line_number;
    new = malloc(sizeof(stack_t));
    if (!new) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new->n = n;
    new->prev = NULL;
    new->next = *stack;

    if (*stack)
        (*stack)->prev = new;

    *stack = new;
}


void pall(stack_t **stack, unsigned int line_number) {
    stack_t *temp = *stack;

    (void)line_number;

    while (temp) {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}


void pint(stack_t **stack, unsigned int line_number) {
    if (!*stack) {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*stack)->n);
}

void pop(stack_t **stack, unsigned int line_number) {
    stack_t *temp;

    if (!*stack) {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = *stack;
    *stack = (*stack)->next;
    if (*stack)
        (*stack)->prev = NULL;
    free(temp);
}

void swap(stack_t **stack, unsigned int line_number) {
    int temp;
    if (!stack || !(*stack) || !((*stack)->next)) {
        printf("L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    temp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
}
void nop(stack_t **stack, unsigned int line_number) {
    (void)stack;
    (void)line_number;
}

void mul(stack_t **stack, unsigned int line_number) {
    if (!(*stack) || !((*stack)->next)) {
        printf("L%d: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    (*stack)->next->n *= (*stack)->n;
    pop(stack, line_number);
}

void mod(stack_t **stack, unsigned int line_number) {
    if (!(*stack) || !((*stack)->next)) {
        printf("L%d: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    if ((*stack)->n == 0) {
        printf("L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }
    (*stack)->next->n %= (*stack)->n;
    pop(stack, line_number);
}


void div_op(stack_t **stack, unsigned int line_number) {
    if (!(*stack) || !((*stack)->next)) {
        printf("L%d: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    if ((*stack)->n == 0) {
        printf("L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }
    (*stack)->next->n /= (*stack)->n;
    pop(stack, line_number);
}

void sub(stack_t **stack, unsigned int line_number) {
    if (!(*stack) || !((*stack)->next)) {
        printf("L%d: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    (*stack)->next->n -= (*stack)->n;
    pop(stack, line_number);
}


void add(stack_t **stack, unsigned int line_number) {
    if (!(*stack) || !((*stack)->next)) {
        printf("L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    (*stack)->next->n += (*stack)->n;
    pop(stack, line_number);
}

void free_stack(stack_t *stack) {
    stack_t *temp;

    while (stack) {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}



int main(int argc, char **argv) {
    FILE *file;
    char *line = NULL, *opcode, *arg_str;
    size_t len = 0;
    ssize_t read;
    unsigned int line_number = 0;

    if (argc != 2) {
        printf("USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file) {
        printf("Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, file)) != -1) {
        line_number++;
        opcode = strtok(line, "\n\t\r ");
        arg_str = strtok(NULL, "\n\t\r ");


        if (strcmp(opcode, "push") == 0) {
            int arg = atoi(arg_str);
            push(&head,line_number, arg);
        } else if (strcmp(opcode, "pall") == 0) {
            pall(&head, line_number);
        } else if (strcmp(opcode, "pint") == 0) {
            pint(&head, line_number);
        } else if (strcmp(opcode, "pop") == 0) {
            pop(&head, line_number);
        } else if (strcmp(opcode, "swap") == 0) {
            swap(&head, line_number);
        } else if (strcmp(opcode, "add") == 0) {
            add(&head, line_number);
        } else if (strcmp(opcode, "nop") == 0) {
            nop(&head, line_number);
        } else if (strcmp(opcode, "sub") == 0) {
            sub(&head, line_number);
        } else if (strcmp(opcode, "div") == 0) {
            div_op(&head, line_number);
        } else if (strcmp(opcode, "mul") == 0) {
            mul(&head, line_number);
        } else if (strcmp(opcode, "mod") == 0) {
            mod(&head, line_number);
        } else {
            printf("L%d: unknown instruction %s\n", line_number, opcode);
            exit(EXIT_FAILURE);
        }
    }

    fclose(file);
    if (line)
        free(line);
free_stack(head);



    return 0;
}
