#include <stdio.h>

int main(void)
{
	int number;
	int newbyte;
	printf("Number: ");
	scanf("%d", &number);
	printf("New third byte: ");
	scanf("%d", &newbyte);
	if (newbyte > 255){
		printf("Too large byte\n");
		return 0;
	}
	number = (newbyte << 16) | (number & 0xFF00FFFF);
	printf("NEW NUMBER: %d\n", number);

	return 0;
}
