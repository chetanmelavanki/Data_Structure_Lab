#include <stdio.h>
#define max 10

int push(int[], int, int);
int pop(int[], int*);

int evaluatePostfix(char postfix[]) {
    int stack[max];
    int top = -1;  // Initialize stack top
    int i = 0, op1, op2, result;
    char symb;

    while (postfix[i] != '\0') {
        symb = postfix[i];
        if (symb >= '0' && symb <= '9') {
            top = push(stack, top, symb - '0');  // Push converted integer
        } else if (symb == '+' || symb == '-' || symb == '*' || symb == '/') {
            op2 = pop(stack, &top);  // Get second operand
            op1 = pop(stack, &top);  // Get first operand

            // Perform the operation
            if (symb == '+')
                result = op1 + op2;
            else if (symb == '-')
                result = op1 - op2;
            else if (symb == '*')
                result = op1 * op2;
            else if (symb == '/')
                result = op1 / op2;

            top = push(stack, top, result);  // Push the result onto the stack
        }
        i++;
    }
    return pop(stack, &top);  // Final result
}

int push(int s[max], int t, int ele) {
    if (t == max - 1) {
        printf("Stack is full\n");
    } else {
        s[++t] = ele;  // Increment top and push element
    }
    return t;
}

int pop(int s[max], int *top) {
    if (*top == -1) {
        printf("Stack is empty\n");
        return -1;  // Indicate error
    } else {
        return s[(*top)--];  // Return element and decrement top
    }
}


int main() {
    char postfix[25];
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);
    int result = evaluatePostfix(postfix);
    printf("The result of postfix expression %s is: %d\n", postfix, result);
    return 0;
}
//output:Enter the postfix expression: 23+5*
//The result of postfix expression 23+5* is: 25


//------------------
//(program exited with code: 0)
//Press return to continue

