#include <stdio.h>

union Point {
    int x;
    int y;
};

typedef union Point Point;

int main() {
    Point p1;
    p1.x = 1; p1.y = 2;
    printf("size:%d,  p1.x:%d, p1.y:%d,", sizeof(p1), p1.x, p1.y);
    return 0;
}