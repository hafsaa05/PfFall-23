/* Date: 11/21/2023
Programmer: Hafsa Rashid
Descrip:called Organization (Outer structure). The structure Organization has the data members like
organisation_name,organisation_number. The Employee structure is nested inside the structure
Organization and it has the data members like employee_id, name, salary.
*/
#include <stdio.h>
struct Employee {
    int employee_id;
    char name[50];
    float salary;
};
struct Organization {
    char organisation_name[50];
    int organisation_number;
    struct Employee emp; // Nested Employee structure
};

int main() {
    struct Organization org = {
        .organisation_name = "ABC Corp",
        .organisation_number = 12345,
        .emp = { // Initialize the nested Employee structure
            .employee_id = 101,
            .name = "John Doe",
            .salary = 50000.0
        }
    };

    printf("Employee ID: %d\n", org.emp.employee_id);
    printf("Name: %s\n", org.emp.name);
    printf("Salary: %.2f\n", org.emp.salary);
    printf("Organization Name: %s\n", org.organisation_name);
    printf("Organization Number: %d\n", org.organisation_number);

    return 0;
}
