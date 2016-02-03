#include <stdio.h>

int main() {
    int i=5, j=5, k;
    
    k = i++ + j;
    printf("%d", k);
    return 0;
}