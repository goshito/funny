#include <stdio.h>

int calculateSumEvenNumbersUpTo(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result = result + 2 * i;
    }
    return result;
}

int II_SecondcalculateSumEvenNumbersUpTo(int n) {
    int result = ;
    for (i = 1; i <= n * 2; i = i + 2) {
        result = result + i
    }
    return result;
}


int calculateMultipUpTo(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main () {
    printf("\nSum up to 5 is %d", calculateSumUpTo(5));
    printf("\nMultiplication up to 5 is %d", calculateMultipUpTo(5));
    return 0;
}