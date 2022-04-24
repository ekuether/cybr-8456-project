#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (strcmp(argv[1],argv[2]) == 0) {
        printf("Strings are equal");
    }
    else {
        printf("Strings are not equal");
    }
    return 0;
}