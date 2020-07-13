#include <stdio.h>

int main() {
    int number, i, sum = 0, digit, product;
    scanf("%d", &number);
    int temp = number;
    while (temp != 0) {
        digit = temp % 10;
        product = 1;
        for (i = 1; i <= digit; i++) {
            product *= i;
        }
        temp /= 10;
        sum += product;
    }
    if (sum == number) {
        printf("%d is a Strong Number",number);
    } else {
        printf("%d is not a Strong Number",number);
    }

}
