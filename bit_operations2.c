#include <stdio.h>

void showbits(unsigned int x) {
    int i;
    for (i = (sizeof(int) * 8) - 1; i >= 0; i--)
        putchar(x & (1u << i) ? '1' : '0');
    printf("\n");
}

int main() {
    int num;
    printf("Enter a negative integer: ");
    scanf("%d", &num);

    unsigned int bin_num = ~num + 1;

    showbits(bin_num);

    return 0;
}
