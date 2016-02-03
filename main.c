#include <stdio.h>

void addOne(int a[]) {
    a[1]++;
}
int main() {
    int marks[] = {2, 5, 10};
    printf("%d\n", marks);
    printf("before addOne - marks[0]: %d\n", marks[1]);
    addOne(marks);
    printf("after addOne - marks[0]: %d\n", marks[1]);    
    return 0;
}