#include <stdio.h>
#include <stdlib.h>
#include "hospitalization.h"

HospitalizationNode* addHospitalization(HospitalizationNode* head, Patient patient) {
    HospitalizationNode* newNode = (HospitalizationNode*)malloc(sizeof(HospitalizationNode));
    newNode->patient = patient;
    newNode->next = head;
    return newNode;
}

HospitalizationNode* removeHospitalization(HospitalizationNode* head, int id) {
    HospitalizationNode* current = head;
    HospitalizationNode* previous = NULL;

    while (current != NULL && current->patient.id != id) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Patient not found!\n");
        return head;
    }

    if (previous == NULL) {
        head = current->next;
    } else {
        previous->next = current->next;
    }

    free(current);
    return head;
}

void updateHospitalization(HospitalizationNode** head) {
    if (*head == NULL) {
        printf("No hospitalizations to update.\n");
        return;
    }

    HospitalizationNode* current = *head;
    int severityHandled = 0;

    while (current != NULL) {
        if (!severityHandled) {
            printf("\nUpdating patient %s (Severity %d)\n", current->patient.name, current->patient.severity);
            current->patient.daysHospitalized++;
            int discharge;
            do {
                printf("Discharge patient %s? (1 for Yes, 0 for No): ", current->patient.name);
                scanf("%d", &discharge);
                if (discharge != 1 && discharge != 0) {
                    printf("Invalid option!\n");
                }
            } while (discharge != 1 && discharge != 0);

            if (discharge == 1) {
                *head = removeHospitalization(*head, current->patient.id);
                printf("Patient %s has been discharged.\n", current->patient.name);
            } else {
                printf("Patient %s remains hospitalized. Days hospitalized: %d\n", current->patient.name, current->patient.daysHospitalized);
            }
            severityHandled = 1;
        }
        current = current->next;
    }
}

void printHospitalizations(HospitalizationNode* head) {
    if (head == NULL) {
        printf("No patients are currently hospitalized.\n");
        return;
    }

    HospitalizationNode* current = head;
    while (current != NULL) {
        printf("Patient: %s, Severity: %d, Hospitalized: %d days\n", current->patient.name, current->patient.severity, current->patient.daysHospitalized);
        current = current->next;
    }
}
