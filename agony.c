#include<stdio.h>

int main() {
    int i = 5;
    int j = i++ + ++i;
    printf("%d\n", j); // Output can vary depending on the compiler
    return 0;
}

