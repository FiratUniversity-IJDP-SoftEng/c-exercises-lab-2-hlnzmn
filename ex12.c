#include <stdio.h>

int main() {
    int n;

    do {
        printf("Faktoriyel (0-50): ");
        scanf("%d", &n);
    } while (n < 0 || n > 50);

    for (int i = 1; i <= n; i++) {
       
    }

    printf("%d! = %lld\n", n, fact);

    return 0;
}
