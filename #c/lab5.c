#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100

typedef struct {
    char name[50];
    int age;
    int id;
} Patient;

Patient patients[MAX_PATIENTS];
int patientCount = 0;

void addPatient() {
    if (patientCount >= MAX_PATIENTS) {
        printf("Patient list is full!\n");
        return;
    }

    printf("Enter patient name: ");
    scanf("%s", patients[patientCount].name);
    printf("Enter patient age: ");
    scanf("%d", &patients[patientCount].age);
    printf("Enter patient ID: ");
    scanf("%d", &patients[patientCount].id);

    patientCount++;
    printf("Patient added successfully!\n");
}

void searchPatientById() {
    int id, i;
    printf("Enter patient ID to search: ");
    scanf("%d", &id);
    for (i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            printf("Patient found:\n");
            printf("Name: %s\n", patients[i].name);
            printf("Age: %d\n", patients[i].age);
            printf("ID: %d\n", patients[i].id);
            return;
        }
    }
    printf("Patient with ID %d not found.\n", id);
}

void deletePatient() {
    int id, i, j;
    printf("Enter patient ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            for (j = i; j < patientCount - 1; j++) {
                patients[j] = patients[j + 1];
            }
            patientCount--;
            printf("Patient with ID %d deleted successfully.\n", id);
            return;
        }
    }
    printf("Patient with ID %d not found.\n", id);
}

void countPatients() {
    printf("Total number of patients: %d\n", patientCount);
}
void display()
{
    if(patientCount==0)
    {
        printf("empty");
    }
    for(int i=0;i<patientCount;i++)
    {
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("ID: %d\n", patients[i].id);
    }
}
int main() {
    int choice;

    while (1) {
        printf("\n--- Hospital Management System ---\n");
        printf("1. Add New Patient\n");
        printf("2. Search Patient by ID\n");
        printf("3. Delete a Patient Record\n");
        printf("4. Count Total Number of Patients\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                searchPatientById();
                break;
            case 3:
                deletePatient();
                break;
            case 4:
                countPatients();
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            case 6:display();
                    break;    
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
