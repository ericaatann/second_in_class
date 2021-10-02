#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++) //search until end of table ptr++ will increment by what??
    {
        if (ptr->number == targetNumber) // check if it equals the employee number
            return (PtrToEmployee)ptr;   // return location of the number to callee.
    }
    return NULL;
}

//Essentially the same functionality as above but comparing strings to check if equal
PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char *targetName)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++)
    {
        if (strcmp(ptr->name, targetName) == 0)
            return (PtrToEmployee)ptr;
    }
    return NULL;
}

//searching by phone number
PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char *phone)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++)
    {
        if (strcmp(ptr->phone, phone) == 0)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

//search by salary
PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++) //search until end of table ptr++ will increment by what??
    {
        if (ptr->salary == targetSalary) // check if it equals the employee salary
            return (PtrToEmployee) ptr;   // return location of the number to callee.
    }
    return NULL;
}
