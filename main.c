#include <stdio.h>

void printDivisors(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    printDivisors(12);
    return 0;
}