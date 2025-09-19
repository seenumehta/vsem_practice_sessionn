#include<stdio.h>
int main() {
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        int digit = n % 10;
        printf("%d", digit);
        n = n / 10;
        if(n == digit) {
            printf(" is a palindrome");
        } else {
            printf(" is not a palindrome");
        }
    }

    
    return 0;
}