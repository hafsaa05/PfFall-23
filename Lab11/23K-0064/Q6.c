/* Date: 11/21/2023
Programmer: Hafsa Rashid
Descrip: Create a structure named Date having day, month and year as its elements. Store the current
date in the structure. Now add 45 days to the current date and display the final date.
*/
#include <stdio.h>
#include <time.h>

// Define a structure for date
struct Date {
    int day;
    int month;
    int year;
};

// Function to add days to a date
void addDays(struct Date *date, int daysToAdd) {
    // Convert the date to time_t
    struct tm timeStruct = {
        .tm_mday = date->day,
        .tm_mon = date->month - 1,  // Adjust for 0-indexed months
        .tm_year = date->year - 1900  // Adjust for years since 1900
    };

    // Convert the structure to time_t
    time_t t = mktime(&timeStruct);

    // Add the specified number of seconds (daysToAdd * 24 hours * 60 minutes * 60 seconds)
    t += daysToAdd * 24 * 60 * 60;

    // Convert the result back to a structure
    struct tm *resultTime = localtime(&t);

    // Update the date structure
    date->day = resultTime->tm_mday;
    date->month = resultTime->tm_mon + 1;  // Adjust for 1-indexed months
    date->year = resultTime->tm_year + 1900;  // Adjust for years since 1900
}

int main() {
    // Get the current time
    time_t currentTime = time(NULL);
    struct tm *localTime = localtime(&currentTime);

    // Create a structure for the current date
    struct Date currentDate = {
        .day = localTime->tm_mday,
        .month = localTime->tm_mon + 1,  // Adjust for 1-indexed months
        .year = localTime->tm_year + 1900  // Adjust for years since 1900
    };

    // Display the current date
    printf("Current Date: %02d-%02d-%d\n", currentDate.day, currentDate.month, currentDate.year);

    // Add 45 days to the current date
    addDays(&currentDate, 45);

    // Display the final date
    printf("Final Date after adding 45 days: %02d-%02d-%d\n", currentDate.day, currentDate.month, currentDate.year);

    return 0;
}
