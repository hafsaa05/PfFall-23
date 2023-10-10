#include <stdio.h>

int main() {
    int totalMatches = 21;
    int userPick, computerPick;
    while (totalMatches > 1) {
        printf("there are %d matchsticks left. Enter your pick from 1-4: ", totalMatches);
        scanf("%d", &userPick);
        if (userPick < 1 || userPick > 4 || userPick > totalMatches) {
            printf("invalid input. Please pick 1 - 4 matchsticks within the remaining count.\n");
            continue;
        }
        totalMatches -= userPick;
        computerPick = 5 - userPick; 
        printf("computer picks %d matchstick(s).\n", computerPick);
        totalMatches -= computerPick;
    }

    if (totalMatches == 1) {
        printf("you are forced to pick the last matchstick hence Compoter wins!\n");
    } else {
        printf("congrats! You win\n");
    }

    return 0;
}

