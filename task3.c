#include <stdio.h>

int main() {
    printf("\033[31mПонеділок\033[0m\n");
    printf("\033[32mВівторок\033[0m\n");
    printf("\033[33mСереда\033[0m\n");
    printf("\033[34mЧетвер\033[0m\n");
    printf("\033[35mП'ятниця\033[0m\n");
    printf("\033[36mСубота\033[0m\n");
    printf("\033[37mНеділя\033[0m\n");

    printf("\n");

    float a, b;
    printf("Введіть два числа типу float: ");
    scanf("%f %f", &a, &b);

    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    printf("\n");

    printf("%-10s = %8.2f\n", "a", a);
    printf("%-10s = %8.2f\n", "b", b);

    return 0;
}