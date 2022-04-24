#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    int addition= 0;
    int multiplication = 1;
    int subtraction = 15;
    int division = 120;
    int arr[5] = {1,2,3,4,5};
    int i;
    
    for (i = 0; i < 5; i++) {
        addition += arr[i];
    }

    for (i = 0; i < 5; i++) {
        multiplication *= arr[i];
    }

    for (i = 0; i < 5; i++) {
        subtraction -= arr[i];
    }

    for (i = 0; i < 5; i++) {
        division /= arr[i];
    }

    printf("%i\n", addition);
    printf("%i\n", multiplication);
    printf("%i\n", subtraction);
    printf("%i\n", division);
    printf("%f\n", sin(addition));
    printf("%f\n", pow(multiplication, multiplication));
    printf("%f\n", exp(subtraction));
    printf("%f\n", abs(division));

    return 0;
}