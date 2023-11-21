/* Date: 11/21/2023
Programmer: Hafsa Rashid
Descrip: You need to implement the following 2 struct.
struct Student{}; struct Register{};

Student contains attributes StudentId, FirstName, LastName, cellno, email.
Register contains the attributes CourseId, CourseName.
Now you need to inherit the Register struct in Student struct. It means that the student struct holds the
variable of Register struct variable. After that you need to take input for 5 students and then print them
[Hint: Declare array of struct Student std[5]; for 5 students
*/
#include <stdio.h>

struct Register {
    int courseId;
    char courseName[50];
};

struct Student {
    int studentId;
    char firstName[50];
    char lastName[50];
    char cellno[15];
    char email[50];
    struct Register studentRegister;  // Embedding the Register struct
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &students[i].studentId);
        printf("First Name: ");
        scanf("%s", students[i].firstName);
        printf("Last Name: ");
        scanf("%s", students[i].lastName);
        printf("Cell Number: ");
        scanf("%s", students[i].cellno);
        printf("Email: ");
        scanf("%s", students[i].email);

        // Input information for the Register part
        printf("Course ID: ");
        scanf("%d", &students[i].studentRegister.courseId);
        printf("Course Name: ");
        scanf("%s", students[i].studentRegister.courseName);
    }

    printf("\nDetails for each student:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Student ID: %d\n", students[i].studentId);
        printf("First Name: %s\n", students[i].firstName);
        printf("Last Name: %s\n", students[i].lastName);
        printf("Cell Number: %s\n", students[i].cellno);
        printf("Email: %s\n", students[i].email);

        printf("Course ID: %d\n", students[i].studentRegister.courseId);
        printf("Course Name: %s\n", students[i].studentRegister.courseName);
        printf("\n");
    }

    return 0;
}
