#include <stdio.h>

int main() {
    int num;
    int sum = 0, count = 0;

    while (1) {
        printf("Sayi gir (-1 bitirir): ");
        scanf("%d", &num);

        if (num == -1)
            break;

        sum += num;
        count++;
    }

    if (count > 0) {
        printf("Toplam: %d\n", sum);
        printf("Adet: %d\n", count);
        printf("Ortalama: %.2f\n", (float)sum / count);
    } else {
        printf("Hic sayi girilmedi.\n");
    }

    return 0;
}
