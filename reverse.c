#include<stdio.h>
int main() {
    int n = 451;

    while (n != 0) {
        int digit = n % 10;
        printf("%d", digit);
        n = n / 10;
    }
    return 0;
}