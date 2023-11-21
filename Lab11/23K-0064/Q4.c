/* Date: 11/21/2023
Programmer: Hafsa Rashid
Descrip: Write a structure to store the names, salary and hours of work per day of 10 employees in a
company. Write a program to increase the salary depending on the number of hours of work per
day as follows and then print the name of all the employees along with their final salaries.
● Hours of work per day 8 10 >=12
● Increase in salary $50 $100 $150
*/
#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
    int hours_worked;
};
void increaseSalary(struct Employee *employee) {
    if (employee->hours_worked >= 12) {
        employee->salary += 150.0;
    } else if (employee->hours_worked >= 10) {
        employee->salary += 100.0;
    } else if (employee->hours_worked >= 8) {
        employee->salary += 50.0;
    }
}

int main() {
    // Assume there are 10 employees in the company
    struct Employee employees[10];
	int i;
    // Populate employee data (you can add more employees as needed)
    for ( i = 0; i < 10; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hours_worked);
    }
    for (i = 0; i < 10; i++) {
        increaseSalary(&employees[i]);
    }
    printf("\nEmployee Details:\n");
    
    for (i = 0; i < 10; i++) {
        printf("Name: %s, Final Salary: $%.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
