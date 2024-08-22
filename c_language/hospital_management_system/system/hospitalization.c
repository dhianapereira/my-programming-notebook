#include <stdio.h>
#include <stdlib.h>
#include "hospitalization.h"

/**
 * Adds a patient to the list of hospitalized patients.
 * 
 * @param head The current head of the hospitalized patients list.
 * @param patient The patient to be added to the list.
 * @return HospitalizationNode* The new head of the list after adding the patient.
 */
HospitalizationNode* addHospitalization(HospitalizationNode* head, Patient patient) {
    HospitalizationNode* newNode = (HospitalizationNode*)malloc(sizeof(HospitalizationNode));
    newNode->patient = patient;
    newNode->next = head;
    return newNode;
}

/**
 * Removes a patient from the hospitalization list by ID.
 * 
 * @param head The head of the list of hospitalized patients.
 * @param id The unique identifier of the patient to remove.
 * @return HospitalizationNode* The head of the list after removing the patient.
 */
HospitalizationNode* removeHospitalization(HospitalizationNode* head, int id) {
    HospitalizationNode* current = head;
    HospitalizationNode* previous = NULL;

    while (current != NULL && current->patient.id != id) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
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

/**
 * Updates the hospitalization status for all hospitalized patients.
 * 
 * Increments the hospitalization days and prompts the user to discharge or continue
 * hospitalization for each patient.
 * 
 * @param head A pointer to the head of the list of hospitalized patients.
 */
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
                while (scanf("%d", &discharge) != 1 || (discharge != 1 && discharge != 0)) {
                    printf("Invalid option! Enter 1 for Yes, 0 for No: ");
                    while (getchar() != '\n');
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

/**
 * Prints the details of hospitalized patients.
 * 
 * @param head The head of the list of hospitalized patients.
 */
void printHospitalizations(HospitalizationNode* head) {
    if (head == NULL) {
        printf("No patients are currently hospitalized.\n");
        return;
    }

    HospitalizationNode* current = head;
    while (current != NULL) {
        printf("ID: %d, Name: %s, Age: %d, Severity: %d, Days Hospitalized: %d\n",
               current->patient.id, current->patient.name, current->patient.age,
               current->patient.severity, current->patient.daysHospitalized);
        current = current->next;
    }
}