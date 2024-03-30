#include <stdio.h>

int main() {
    int num;
    int counter = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1){
        	counter++;
        }
    }
    printf("Number of set bits: %d\n", counter);

    return 0;
}
