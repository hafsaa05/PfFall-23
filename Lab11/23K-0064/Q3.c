/* Date: 11/21/2023
Programmer: Hafsa Rashid
Descrip: Write a program to compare two dates entered by the user. Make a structure named Date to store
the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal"
otherwise display "Dates are not equal".
*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) {
    if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
   
    struct Date date1, date2;

    
    printf("Enter the first date (day, month, year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

   
    printf("Enter the second date (day, month, year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

   
    if (compareDates(date1, date2)) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}


                                                                                                                                                                                                             
