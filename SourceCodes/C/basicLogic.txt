#include <stdio.h>

int main(int argc, char* argv[]){
    if (argc > 1) {
        printf("Multiple Arguments");
    }
    else {
        printf("No Arguments");
    }
    return 0;
}