#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student {
    char name[81];
    char registration[8];
    char class;
    float grade1;
    float grade2;
    float grade3;
};
typedef struct student Student;

Student students[MAX_STUDENTS];
int num_students = 0;
int has_passing_students = 0;
int has_failing_students = 0;

void registerStudent();
void updateStudent(const char* registration);
void deleteStudent(const char* registration);
void printPassingStudents();
void printFailingStudents();

int main() {
    int option;
    char registration[8];
    
    do {
        printf("\nSelect an option:\n");
        printf("1. Register a student\n");
        printf("2. Update a student\n");
        printf("3. Delete a student\n");
        printf("4. Print passing students\n");
        printf("5. Print failing students\n");
        printf("6. Exit\n");
        printf("Option: ");
        scanf("%d", &option);
        
        switch(option) {
            case 1:
                registerStudent();
                break;
            case 2:
                printf("Registration of the student to update: ");
                scanf("%7s", registration);
                updateStudent(registration);
                break;
            case 3:
                printf("Registration of the student to delete: ");
                scanf("%7s", registration);
                deleteStudent(registration);
                break;
            case 4:
                if(has_passing_students)
                    printPassingStudents();
                else
                    printf("No passing students.\n");
                break;
            case 5:
                if(has_failing_students)
                    printFailingStudents();
                else
                    printf("No failing students.\n");
                break;
            case 6:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid option.\n");
        }
    } while(option != 6);
    
    return 0;
}

void registerStudent() {
    if (num_students < MAX_STUDENTS) {
        Student newStudent;
        printf("Name: ");
        scanf("%80s", newStudent.name);
        printf("Registration: ");
        scanf("%7s", newStudent.registration);
        printf("Class: ");
        scanf(" %c", &newStudent.class);
        printf("Grade 1: ");
        scanf("%f", &newStudent.grade1);
        printf("Grade 2: ");
        scanf("%f", &newStudent.grade2);
        printf("Grade 3: ");
        scanf("%f", &newStudent.grade3);
        
        students[num_students++] = newStudent;
        
        float average = (newStudent.grade1 + newStudent.grade2 + newStudent.grade3) / 3;
        if (average >= 7.0)
            has_passing_students = 1;
        else
            has_failing_students = 1;
    } else {
        printf("Maximum number of students reached.\n");
    }
}

void updateStudent(const char* registration) {
    for (int i = 0; i < num_students; ++i) {
        if (strcmp(students[i].registration, registration) == 0) {
            printf("New grades for student %s:\n", students[i].name);
            printf("Grade 1: ");
            scanf("%f", &students[i].grade1);
            printf("Grade 2: ");
            scanf("%f", &students[i].grade2);
            printf("Grade 3: ");
            scanf("%f", &students[i].grade3);
            
            float average = (students[i].grade1 + students[i].grade2 + students[i].grade3) / 3;
            if (average >= 7.0){
                has_passing_students = 1;
            }else{
                has_failing_students = 1;
            }
                
            return;
        }
    }
    printf("Student with registration %s not found.\n", registration);
}

void deleteStudent(const char* registration) {
    for (int i = 0; i < num_students; ++i) {
        if (strcmp(students[i].registration, registration) == 0) {
            has_passing_students = 0;
            has_failing_students = 0;

            for (int j = i; j < num_students - 1; ++j) {
                students[j] = students[j + 1];
                
                float average = (students[j].grade1 + students[j].grade2 + students[j].grade3) / 3;
                if (average >= 7.0){
                    has_passing_students = 1;
                }else{
                    has_failing_students = 1;
                }
            }
            num_students--;
            printf("Student with registration %s deleted successfully.\n", registration);
            
            return;
        }
    }
    printf("Student with registration %s not found.\n", registration);
}

void printPassingStudents() {
    printf("Passing students:\n");
    for (int i = 0; i < num_students; ++i) {
        float average = (students[i].grade1 + students[i].grade2 + students[i].grade3) / 3;
        if (average >= 7.0) {
            printf("Name: %s, Registration: %s, Average: %.2f\n", students[i].name, students[i].registration, average);
        }
    }
}

void printFailingStudents() {
    printf("Failing students:\n");
    for (int i = 0; i < num_students; ++i) {
        float average = (students[i].grade1 + students[i].grade2 + students[i].grade3) / 3;
        if (average < 7.0) {
            printf("Name: %s, Registration: %s, Average: %.2f\n", students[i].name, students[i].registration, average);
        }
    }
}
