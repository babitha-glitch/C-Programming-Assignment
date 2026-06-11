/* 
   Q9: Structure 'Employee'
       Store: id, name, salary & Display */

#include <stdio.h>

// Define structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);  // Reads string with spaces
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Display employee details
    printf("\n----- Employee Details -----\n");
    printf("ID     : %d\n", emp.id);
    printf("Name   : %s\n", emp.name);
    printf("Salary : Rs. %.2f\n", emp.salary);

    return 0;
}
