#include <stdio.h>

long sumOfDigit(long n);

int main()
{
    long num;
    printf("Enter a number : ");
    scanf("%ld", &num);

    printf("%ld = %ld \n", num, sumOfDigit(num));

    return 0;
}

long sumOfDigit(long n) {
    long rem, temp, sum = 0;
    temp = n;

    while(temp != 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    return sum;
}