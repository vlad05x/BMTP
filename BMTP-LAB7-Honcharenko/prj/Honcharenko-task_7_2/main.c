#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("chcp 1251 & cls");
    int numbers [14];
    int count_150 = 0, count_1000 = 0, count_10000 = 0;
    printf ("Введіть 14 чисел:\n");
    for (int i = 0; i < 14; i++) {
        scanf ("%d", &numbers[i]);
    }

    for (int i = 0; i < 14; i++) {
        if (numbers[i] == 150) {
            count_150++;
        } else if (numbers[i] == 1000) {
            count_1000++;
        } else if (numbers[i] == 10000) {
            count_10000++;
    }
}

    printf ("Кількість чисел = 150: %d\n", count_150);
    printf ("Кількість чисел = 1000: %d\n", count_1000);
    printf ("Кількість чисел = 10000: %d\n", count_10000);

    return 0;
}
