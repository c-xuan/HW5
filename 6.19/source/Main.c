#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int results[13] = { 0 };
    int dice1, dice2, sum;

    srand(time(0));

    for (int i = 0; i < 36000; i++) {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        results[sum]++;
    }

    printf("The total number of times\n");
    for (int i = 2; i <= 12; i++) {
        printf("Sum %d: %d number\n", i, results[i]);
    }

    system("pause");
    return 0;
}
