#include <stdio.h>
int main() {
    printf("Дані типу char займають %zu байт. \n", sizeof(char) );
    printf("Дані типу int займають %zu байт. \n", sizeof(int) );
    printf("Дані типу float займають %zu байт. \n", sizeof(float) );
    printf("Дані типу long int займають %zu байт. \n", sizeof(long int) );
    printf("Дані типу long double займають %zu байт. \n", sizeof(long double) );
    return 0;
}