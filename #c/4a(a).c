#include <stdio.h>
#include <ctype.h>
#include <math.h>

int stack[20], top = -1;

void push(int item) {
    stack[++top] = item;
}

int pop() {
    return stack[top--];
}

int main() {
    char postfix[100], symb;
    int i, op1, op2;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++) {
        symb = postfix[i];

        if (isdigit(symb)) {
            push(symb - '0');
        } else {
            op2 = pop();
            op1 = pop();

            switch (symb) {
                case '+': push(op1 + op2); break;
                case '-': push(op1 - op2); break;
                case '*': push(op1 * op2); break;
                case '/': push(op1 / op2); break;
                case '^': push(pow(op1, op2)); break;
                default: printf("Invalid operator\n"); return 1;
            }
             }
    }

    printf("Result: %d\n", pop());
    return 0;
}