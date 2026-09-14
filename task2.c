#include <stdio.h>

int main() {
    int n;

    printf("Введіть ціле число: ");
    scanf("%d", &n);

    printf("%%d      ->|%d|\n", n);
    printf("%%4d     ->|%4d|\n", n);
    printf("%%8d     ->|%8d|\n", n);
    printf("%%1d     ->|%1d|\n", n);
    printf("%%-7d    ->|%-7d|\n", n);

    return 0;
}