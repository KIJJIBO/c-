#include <stdio.h>

int main() {
    int result = 0;
    char answer;

    int cards[5][16] = {
        {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31},   // 1
        {2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31},  // 2
        {4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31},  // 4
        {8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31},// 8
        {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31} //16
    };

    int values[5] = {1,2,4,8,16};

    printf("Think of a number between 1 and 31.\n");
    printf("Answer with y for YES and n for NO.\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Card %d:\n", values[i]);

        for(int j = 0; j < 16; j++) {
            printf("%d ", cards[i][j]);
        }

        printf("\nIs your number here? (y/n): ");
        scanf(" %c", &answer);

        if(answer == 'y' || answer == 'Y') {
            result += values[i];
        }

        printf("\n");
    }

    printf("Your number is: %d\n", result);

    return 0;
}