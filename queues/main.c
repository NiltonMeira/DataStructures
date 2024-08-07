#include <stdio.h>

int queue[];
int head = -1;
int tail = 1;

void push();
void pop();
void show();

int main(void) {
    int userInput;
    printf("Hello buddy!, this is my queue.\nWhat do you want to do ?");
    printf("\n1 - Push");
    scanf("%d", &userInput);

    switch (userInput) {
        case 1:
            int number;
            printf("Number: ");
            scanf("%d", &number);
            push(number);
            break;

        case 2:
            pop();
            printf("Poped");
            break;

        case 3:
            show();
            break;
    }
}

void push(int value) {
    head++;
    queue[head] = value;
    printf("The value %d was pushed!\n", value);
}

void pop() {
    for (int i = 0; i < head; i++) {
        queue[i] = queue[i+1];
    }
    head --;
}

void show() {
    for(int i =0; i < head;i++) {
        printf("[%d]\n", queue[i]);
    }
}
