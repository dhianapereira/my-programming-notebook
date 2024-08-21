#include <stdio.h>
#include "hospital.h"

void handleTreatment(Queue** queues, HospitalizationNode** hospitalizations) {
    int treated = 0;
    for (int i = 0; i < 4; i++) {
        if (!isQueueEmpty(queues[i])) {
            treated = 1;
            Patient patient = dequeue(queues[i]);
            printf("Treating patient: %s\n", patient.name);
            int hospitalize;
            do {
                printf("Register treatment (1 for hospitalization, 0 for discharge): ");
                scanf("%d", &hospitalize);
                if (hospitalize != 1 && hospitalize != 0) {
                    printf("Invalid option!\n");
                }
            } while (hospitalize != 1 && hospitalize != 0);
            
            if (hospitalize == 1) {
                patient.daysHospitalized = 1;
                *hospitalizations = addHospitalization(*hospitalizations, patient);
            }
            printf("Treatment successfully registered for patient %s.\n", patient.name);
            break;
        }
    }

    if (!treated) {
        printf("No patients in the queue for treatment.\n");
    }
}

void generateReport(HospitalizationNode* head, Queue** queues) {
    int queuesEmpty = 1;
    for (int i = 0; i < 4; i++) {
        if (queues[i]->size > 0) {
            queuesEmpty = 0;
            break;
        }
    }

    if (queuesEmpty && head == NULL) {
        printf("No data available for generating report.\n");
        return;
    }
    
    printf("\n--- Hospital Report ---\n");
    for (int i = 0; i < 4; i++) {
        printf("Queue for severity %d: %d patients\n", i + 1, queues[i]->size);
    }

    printf("\nHospitalized patients:\n");
    printHospitalizations(head);
}