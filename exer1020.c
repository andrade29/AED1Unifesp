#include <stdio.h>
int main() {
    int dias, anos, meses, dia_rest;
    scanf("%d", &dias);
    anos = dias/365;
    dia_rest = dias%365;
    meses = dias_rest/30;
    dia_rest = dias_rest%30;

    printf("%d ano ou anos\n", anos);
    printf("%d mês ou meses\n", meses);
    printf("%d dia ou dias\n", dia_rest);

    return 0;
}
