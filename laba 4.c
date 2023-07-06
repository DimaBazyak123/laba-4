#include <stdio.h>

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int divisors = countDivisors(n);
    printf("%d\n", divisors);

    return 0;
}