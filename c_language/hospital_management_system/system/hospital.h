#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "queue.h"
#include "hospitalization.h"

void handleTreatment(Queue** queues, HospitalizationNode** hospitalizations);
void generateReport(HospitalizationNode* head, Queue** queues);  

#endif
