#include <stdio.h>
#include <stdlib.h>



#define ERROR 1


int main(int argc, char* argv[]) {
    if (argc != 4) return ERROR;

    int first_number    = atoi(argv[1]);
    int second_number   = atoi(argv[3]);
    int result          = 0;
    char operator       = argv[2][0];

    switch (operator) {
        case '+':
            result = first_number + second_number;
            break;
        
        case '-':
            result = first_number - second_number;
            break;

        case '*':
            result = first_number * second_number;
            break;

        case '/':
            result = first_number / second_number;
            break;

        default:
            printf("Operator not recognized: %c", operator);
            return ERROR;
    };

    printf("%d", result);
    return 0;
}