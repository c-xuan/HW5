#include <stdio.h>
#include <stdlib.h>

void stringReverse(char str[]);

int main(){
	char str[50];

	printf("Enter one String: ");
	scanf("%s", str);
	stringReverse(str);

	system("pause");
	return 0;
}

void stringReverse(char str[]){
	int i = 0, j = 0;
	while (str[i] != '\0') {
		i++;
	}
	printf("Reverse string: ");
	for (j = i - 1;j >= 0;j--) {
		printf("%c", str[j]);
	}
	printf("\n");
}