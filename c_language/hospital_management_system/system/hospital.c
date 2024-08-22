#include <stdio.h>
#include "hospital.h"

/**
 * Handles the treatment process for patients.
 * 
 * The function dequeues a patient from the appropriate severity queue and 
 * prompts the user to decide whether to hospitalize or discharge the patient.
 * 
 * @param queues An array of pointers to the queues of patients sorted by severity.
 * @param hospitalizations A pointer to the list of hospitalized patients.
 */
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
                while (scanf("%d", &hospitalize) != 1 || (hospitalize != 1 && hospitalize != 0)) {
                    printf("Invalid option! Enter 1 for hospitalization, 0 for discharge: ");
                    while (getchar() != '\n');
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

/**
 * Generates a hospital report detailing the current state of queues and hospitalizations.
 * 
 * The report includes the number of patients in each severity queue and the details of 
 * currently hospitalized patients.
 * 
 * @param head The head of the list of hospitalized patients.
 * @param queues An array of pointers to the queues of patients sorted by severity.
 */
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