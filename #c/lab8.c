#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int rollNo;
    char name[50];
    float gpa;
} Student;

Student students[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        printf("No more students can be added.\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &students[count].rollNo);
    printf("Enter name: ");
    scanf("%s", students[count].name);
    printf("Enter GPA: ");
    scanf("%f", &students[count].gpa);

    count++;
    printf("Student added.\n");
}

void searchStudent() {
    int rollNo;
    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            printf("Found: Roll No: %d, Name: %s, GPA: %.2f\n", students[i].rollNo, students[i].name, students[i].gpa);
            return;
        }
    }
    printf("Student not found.\n");
}

void deleteStudent() {
    int rollNo;
    printf("Enter roll number to delete: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("Student deleted.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void displayStudents() {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].rollNo > students[j + 1].rollNo) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("Students sorted by roll number:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d, Name: %s, GPA: %.2f\n", students[i].rollNo, students[i].name, students[i].gpa);
    }
}
void displayStudentsWithGPAThreshold() {
    float threshold;
    printf("Enter GPA threshold: ");
    scanf("%f", &threshold);

    printf("Students with GPA above %.2f:\n", threshold);
    for (int i = 0; i < count; i++) {
        if (students[i].gpa > threshold) {
            printf("Roll No: %d, Name: %s, GPA: %.2f\n", students[i].rollNo, students[i].name, students[i].gpa);
        }
    }printf("noo student");
}


int main() {
    int choice;

    while (1) {
        printf("\n1. Add Student\n2. Search Student\n3. Delete Student\n4. Display Students\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: searchStudent(); break;
            case 3: deleteStudent(); break;
            case 4: displayStudents(); break;
            case 5:displayStudentsWithGPAThreshold();break;
            case 6: return 0;
            default: printf("Invalid choice.\n");
        }
    }
}