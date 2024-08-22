#include <stdio.h>
#include "patient.h"

/**
 * Registers a new patient with a unique ID.
 * 
 * Prompts the user for the patient's name, age, and severity level.
 * 
 * @param id The unique identifier for the patient.
 * @return Patient Returns the patient structure with the provided details.
 */
Patient registerPatient(int id) {
    Patient patient;
    patient.id = id;
    
    printf("Enter patient name: ");
    scanf("%s", patient.name);

    printf("Enter patient age: ");
    while (scanf("%d", &patient.age) != 1 || patient.age < 0) {
        printf("Invalid age! Please enter a valid value: ");
        while (getchar() != '\n');
    }

    printf("Enter patient severity (1-4): ");
    while (scanf("%d", &patient.severity) != 1 || patient.severity < 1 || patient.severity > 4) {
        printf("Invalid severity! Please enter a value between 1 and 4: ");
        while (getchar() != '\n');
    }

    patient.daysHospitalized = 0;
    return patient;
}