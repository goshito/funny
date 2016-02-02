#include <stdio.h>

int numberOfDigitsIn(int n) {
    int temp = n;
    int count;
    
    while(temp != 0) {
        count++;
        temp = temp / 10;
    }
    return count;
}

int main() {
    printf("%d", numberOfDigitsIn(10));
    return 0;
}