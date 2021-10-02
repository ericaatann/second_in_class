#include <string.h>
#include "employee.h"
#include <stdlib.h>

int main(void)
{
    //defined in employeeSearchOne.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);
    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int tableSize, char *phoneNumberToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int tableSize, double salaryToFind);

    //defind in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; //Declaration
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    //Example not found
    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    //Example found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

    //Example not found
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "714-536-2789");
    if (matchPtr != NULL)
        printf("Employee phone number is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone number is NOT found in the record\n");

    //Example found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.80);
    if (matchPtr != NULL)
        printf("Employee salary is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary is NOT found in the record\n");

    return EXIT_SUCCESS;
}