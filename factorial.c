#include <stdio.h>

#define MAX_DIGITS 200

void multiply(int result[], int num, int digits) {
    int carry = 0;
    for (int i = 0; i < digits; i++) {
        int prod = result[i] * num + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        result[digits] = carry % 10;
        carry /= 10;
        digits++;
    }
}

void factorial(int n) {
    int result[MAX_DIGITS] = {1};
    int digits = 1;

    for (int i = 2; i <= n; i++) {
        multiply(result, i, digits);
    }

    printf("%d! = ", n);
    for (int i = digits - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

int main() {
    int number = 100;
    factorial(number);
    return 0;
}
