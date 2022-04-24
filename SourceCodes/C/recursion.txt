#include <stdio.h>

int fib(int val) {
    if (val == 1 || val == 0) {
        return 1;
    }
    return fib(val - 1) + fib(val - 2);
}

int main(int argc, char* argv[]) {
    printf("%i\n",fib(44));
    return 0;
}