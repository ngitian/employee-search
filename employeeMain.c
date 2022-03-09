#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void){ 
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
    
    //defined in employeeTable.c 
    extern Employee EmployeeTable[];     
    extern const int EmployeeTableEntries;      

    PtrToEmployee matchPtr;  //Declaration 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID 1045 is NOT found in the record\n"); 

    //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n"); 
    

    // Example phone found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-555-1215");
    if (matchPtr != NULL)
        printf("Employee phone 310-555-1215 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone 310-555-1215 is NOT found in the record\n");

    // Example phone not found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-284-1224");
    if (matchPtr != NULL)
        printf("Employee phone 909-284-1224 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone 909-284-1224 is NOT found in the record\n");

    // Example salary found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.80);
    if (matchPtr != NULL)
        printf("Employee salary 7.80 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary 7.80 is NOT found in the record\n");

    // Example salary not found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 12.40);
    if (matchPtr != NULL)
        printf("Employee salary 12.40 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary 12.40 is NOT found in the record\n");

    return EXIT_SUCCESS; 
} 