#include <stdio.h>

int main() {
    char g[] = {'a', 'b', 'c', '\0'};
    printf("%s\n", g);
    printf("g=%d\n", sizeof(g));
    char e[] = "abc";
    printf("e=%d\n", sizeof(e));
    char *f = "abc";
    printf("f=%d", sizeof(f)); //char *f = "abc" why size is 8. each element has size = 2
    return 0;
}