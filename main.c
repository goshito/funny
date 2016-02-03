#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    int i = 1, j = 2;
    
    swap(i, j);
    
    printf("i:%d, j:%d", i, j);
    
    return 0;
}