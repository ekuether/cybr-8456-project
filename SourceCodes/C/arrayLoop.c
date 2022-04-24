#include <stdio.h>

int main (int argc, char* argv[]) {
    char arr[10] = {1,2,3,4,5,6,7,8,9,10};
    char loop = 0;
    while (loop != 10) {
        printf("%i",arr[loop]);
        loop++;
    }
    return 0;
}