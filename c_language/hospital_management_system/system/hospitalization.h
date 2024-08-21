#ifndef HOSPITALIZATION_H
#define HOSPITALIZATION_H

#include "patient.h"

typedef struct HospitalizationNode {
    Patient patient;
    struct HospitalizationNode* next;
} HospitalizationNode;

HospitalizationNode* addHospitalization(HospitalizationNode* head, Patient patient);
HospitalizationNode* removeHospitalization(HospitalizationNode* head, int id);
void updateHospitalization(HospitalizationNode** head);
void printHospitalizations(HospitalizationNode* head);

#endif
