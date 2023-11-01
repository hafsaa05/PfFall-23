#include <stdio.h>
#include <stdbool.h>
void findBestOption(int availability[][2], int prices[][2], int *bestDay, int *bestTime) {
    int maxAvailability = 0;
    int maxPrice = 0;
int day,time;
    for ( day = 0; day < 5; day++) {
        for ( time = 0; time < 2; time++) {
            if (availability[day][time] == 1) {
                if (availability[day][time] > maxAvailability || (availability[day][time] == maxAvailability && prices[day][time] < maxPrice)) {
                    maxAvailability = availability[day][time];
                    maxPrice = prices[day][time];
                    *bestDay = day;
                    *bestTime = time;
                }
            }
        }
    }
}

int main() {
    int avalebolity[5][2] = {
        {1, 0},
        {1, 1},
        {0, 1},
        {1, 0},
        {1, 1}
    };

    int prieces[5][2] = {
        {300, 0},
        {320, 310},
        {0, 280},
        {380, 0},
        {375, 400}
    };

    int preference;

    printf("choose an opt->\n");
    printf("1. find the best day and time slot based on availablity and price->\n");
    printf("2. find the best day for a mor flight->\n");
    printf("3. find the best day for an eve flight->\n");
    printf("4. check availibility and prices for a specific day->\n");
    printf("enter your choice (1/2/3/4): ");
    scanf("%d", &preference);

    int bestDay, bestTime,day,time;

    switch (preference) {
        case 1:
            findBestOption(avalebolity, prieces, &bestDay, &bestTime);
            printf("best option-> day %d, time slot %s, prieces %d\n", bestDay + 1, bestTime == 0 ? "mor" : "eve", prieces[bestDay][bestTime]);
            break;
        case 2:
            bestDay = -1;
            for ( day = 0; day < 5; day++) {
                if (avalebolity[day][0] == 1 && (bestDay == -1 || prieces[day][0] < prieces[bestDay][0])) {
                    bestDay = day;
                }
            }
            if (bestDay != -1) {
                printf("best day for a mor flight-> day %d, prieces %d\n", bestDay + 1, prieces[bestDay][0]);
            } else {
                printf("no mor flights avalebol->\n");
            }
            break;
        case 3:
            bestDay = -1;
            for ( day = 0; day < 5; day++) {
                if (avalebolity[day][1] == 1 && (bestDay == -1 || prieces[day][1] < prieces[bestDay][1])) {
                    bestDay = day;
                }
            }
            if (bestDay != -1) {
                printf("best day for an eve flight-> day %d, prices %d\n", bestDay + 1, prieces[day][1]);
            } else {
                printf("no eve flights availebl->\n");
            }
            break;
        case 4:
            printf("enter the day you want to check 1-5-> ");
            int dayToCheck;
            scanf("%d", &dayToCheck);
            dayToCheck--;
            if (dayToCheck >= 0 && dayToCheck < 5) {
                for ( time = 0; time < 2; time++) {
                    if (avalebolity[dayToCheck][time] == 1) {
                        printf("flight available in %s with prieces %d\n", time == 0 ? "mor" : "eve", prieces[dayToCheck][time]);
                    }
                }
                if (avalebolity[dayToCheck][0] == 0 && avalebolity[dayToCheck][1] == 0) {
                    printf("no flights available on this day->\n");
                }
            } else {
                printf("invalid day->\n");
            }
            break;
        default:
            printf("invalid choice->\n");
    }

    return 99;
}

