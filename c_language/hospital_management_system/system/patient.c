#include <stdio.h>
#include "patient.h"

Patient registerPatient(int id) {
    Patient patient;
    patient.id = id;
    printf("Enter patient name: ");
    scanf("%s", patient.name);
    printf("Enter patient age: ");
    scanf("%d", &patient.age);
    printf("Enter patient severity (1-4): ");
    scanf("%d", &patient.severity);
    patient.daysHospitalized = 0;
    return patient;
}