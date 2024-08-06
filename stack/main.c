#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10
int top = -1;
int stack[SIZE];

void push(int value);
void pop();
bool isEmpty();
bool isFull();
int getTop();
void show();


int main(void){
    int userInput;

    printf("Hello buddy, this is my personal stack:");
    while (1) {
        printf("\nWhat do you want to do? \n1 - Push \n2 - Pop\n3 - isEmpty\n4 - isFull\n5 - Get top \n6 - Show\n=>");
        scanf("%d", &userInput);

        switch (userInput) {
            case 1:
                int number;
            printf("Number\n=>");
            scanf("%d", &number);
            push(number);
            break;

            case 2:
                pop();
            break;

            case 3:
                if (isEmpty() == true)
                    printf("The stack is empty");
                else
                    printf("The stack is not empty");
            break;

            case 4:
                if (isEmpty() == true)
                    printf("The stack is full");
                else
                    printf("The stack is not full");
            break;

            case 5:
                int top = getTop();
                printf(&top);
                break;

            case 6:
                show();
                break;
        }

    }

    return 0;
}

void push(int value){
    if (top == SIZE){
        printf("\nOverflow");
    }
    else {
        top ++;
        stack[top] = value;
        printf("\nPushed");
    }
}

void pop() {
    if (top == -1) {
        printf("\nUnderflow");
    }
    else {
        top --;
        printf("\nPoped");
    }
}

bool isEmpty() {
    if (top == -1)
        return true;
    return false;
}

bool isFull() {
    if (top == 10)
        return true;
    return false;
}

int getTop() {
    return stack[SIZE];
}

void show() {
    if (top == -1) {
        printf("Underflow");
    }
    else {
        for (int i = top; i >= 0; i--)
            printf("%d", stack[i]);
    }
}




