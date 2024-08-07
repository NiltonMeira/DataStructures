#include <stdio.h>

int queue[];
int head = -1;
int tail = 1;

void push();

int main(void)
{
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
    }
}

void push(int value)
{
    head ++;
    queue[head] = value;
    printf("The value %d was pushed!\n", value);
}
