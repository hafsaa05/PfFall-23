/* Date: 11/21/2023
Programmer: Hafsa Rashid
Descrip: An automobile company has a serial number for engine parts starting from AA0 to FF9. The other
characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity
manufactured.
● Specify a structure to store information corresponding to a part.
● Write a program to retrieve information on parts with serial numbers between BB1 and CC6.
*/
#include <stdio.h>
#include <string.h>

struct EnginePart {
    char serial_number[4];  // Assuming serial numbers like "AA0" to "FF9"
    int year_of_manufacture;
    char material[20];
    int quantity_manufactured;
};

void retrievePartsInformation(struct EnginePart parts[], int numParts) {
    printf("Parts information between BB1 and CC6:\n");
    int i;
    for (i = 0; i < numParts; i++) {
        // Compare the serial number with "BB1" and "CC6"
        if (strcmp(parts[i].serial_number, "BB1") >= 0 && strcmp(parts[i].serial_number, "CC6") <= 0) {
            printf("Serial Number: %s\n", parts[i].serial_number);
            printf("Year of Manufacture: %d\n", parts[i].year_of_manufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantity_manufactured);
            printf("\n");
        }
    }
}

int main() {
    // Assume there are 100 engine parts
    struct EnginePart engineParts[100];

    // Populate part data (you can add more parts as needed)
    strcpy(engineParts[0].serial_number, "AA0");
    engineParts[0].year_of_manufacture = 2022;
    strcpy(engineParts[0].material, "Steel");
    engineParts[0].quantity_manufactured = 50;

    strcpy(engineParts[1].serial_number, "BB5");
    engineParts[1].year_of_manufacture = 2023;
    strcpy(engineParts[1].material, "Aluminum");
    engineParts[1].quantity_manufactured = 30;

    strcpy(engineParts[2].serial_number, "CC3");
    engineParts[2].year_of_manufacture = 2021;
    strcpy(engineParts[2].material, "Titanium");
    engineParts[2].quantity_manufactured = 20;

    retrievePartsInformation(engineParts, 3);

    return 0;
}
