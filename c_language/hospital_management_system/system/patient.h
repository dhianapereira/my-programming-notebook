#ifndef PATIENT_H
#define PATIENT_H

typedef struct {
    int id;
    char name[50];
    int age;
    int severity;
    int daysHospitalized;
} Patient;

Patient registerPatient(int id);

#endif
