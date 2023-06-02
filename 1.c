#include <stdio.h>

void printNumbers(int a, int b, int c, int d) {
    while (a <= b) {
        printf("%d\n", a * (a % d == c));
        a++;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    printNumbers(a, b, c, d);
    
    return 0;
}