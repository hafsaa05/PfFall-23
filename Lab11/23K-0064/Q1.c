#include <stdio.h>

#define MAX_STUDENTS 450

// Define a structure for student data
struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

// Function to print names of students who joined in a particular year
void printStudentsByYear(struct Student students[], int numStudents, int targetYear) {
    printf("Students who joined in %d:\n", targetYear);
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].yearOfJoining == targetYear) {
            printf("%s\n", students[i].name);
        }
    }
    printf("\n");
}

// Function to print the data of a student with a given roll number
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
    // If the loop completes, the student with the given roll number was not found
    printf("Student with Roll Number %d not found.\n\n", targetRollNumber);
}

int main() {
    // Use a fixed-size array for students
    struct Student students[MAX_STUDENTS] = {
        {1, "John Doe", "Computer Science", "B.Tech", 2022},
        {2, "Jane Smith", "Electrical Engineering", "B.Tech", 2021},
        // Add more students here...
    };

    // Update this with the actual number of students
    int numStudents = 2;

    // Example usage
    printStudentsByYear(students, numStudents, 2022);
    printStudentByRollNumber(students, numStudents, 1);

    return 0;
}
