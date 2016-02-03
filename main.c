#include <stdio.h>

#define MAX(a, b) a>b?a:b

int main() {
    int i = 5, j = 6;
    printf("%d\n", MAX(++i, ++j));
    printf("%d %d", i, j);
    return 0;
}
//Macros?? WTF?