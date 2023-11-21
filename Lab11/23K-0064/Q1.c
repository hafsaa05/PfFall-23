
/* Date: 11/21/2023
Programmer: Hafsa Rashid
Descrip: Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining Assume that there are not more than
450 students in the college.
● Print names of all students who joined in a particular year.
● Print the data of a student whose roll number is given.
*/
#include <stdio.h>

#define MAX_STUDENTS 450

struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};


void printStudentsByYear(struct Student students[], int numStudents, int targetYear) {
    printf("Students who joined in %d:\n", targetYear);
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].yearOfJoining == targetYear) {
            printf("%s\n", students[i].name);
        }
    }
    printf("\n");
}


void printStudentByRollNumber(struct Student students[], int numStudents, int targetRollNumber) {
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].rollNumber == targetRollNumber) {
            printf("Student Data for Roll Number %d:\n", targetRollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return; // exit the function once the student is found
        }
    }
    
    printf("Student with Roll Number %d not found.\n\n", targetRollNumber);
}

int main() {
    // Use a fixed-size array for students
    struct Student students[MAX_STUDENTS];

    // Get the actual number of students from the user
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input student data from the user
    for (int i = 0; i < numStudents; ++i) {
        printf("Enter data for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }


    printStudentsByYear(students, numStudents, 2022);

    int targetRollNumber;
    printf("Enter the Roll Number to search: ");
    scanf("%d", &targetRollNumber);
    printStudentByRollNumber(students, numStudents, targetRollNumber);

    return 0;
