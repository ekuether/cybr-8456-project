#include <stdio.h>

void printOne(char var) {
    printf("%i\n",var);
}

void printTwo(char var) {
    printf("%i\n",var);
    printOne(var);
}

void printThree(char var) {
    printf("%i\n",var);
    printTwo(var);
}

void printFour(char var) {
    printf("%i\n",var);
    printThree(var);
}

void printFive(char var) {
    printf("%i\n",var);
    printFour(var);
}

int main(int argc, char* argv[]) {
    printOne(1);
    printTwo(2);
    printThree(3);
    printFour(4);
    printFive(5);

    return 0;
}