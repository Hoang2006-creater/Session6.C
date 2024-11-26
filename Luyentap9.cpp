#include <stdio.h>
int main() {
    int i, a, b, c, sum;
    printf("Cac so Armstrong 3 chu so là: \n");

    for (i = 100; i <= 999; i++) {
        a = i / 100;       
        b = (i / 10) % 10; 
        c = i % 10;       
        sum = a * a * a + b * b * b + c * c * c;
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
