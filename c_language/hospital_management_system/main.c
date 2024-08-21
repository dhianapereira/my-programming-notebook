#include <stdio.h>
#include "system/patient.h"
#include "system/queue.h"
#include "system/hospitalization.h"
#include "system/hospital.h"

int main() {
    int capacity = 10;
    Queue* queues[4];
    HospitalizationNode* hospitalizations = NULL;
    int autoId = 0;

    for (int i = 0; i < 4; i++) {
        queues[i] = createQueue(capacity);
    }

    int option;
    do {
        printf("\n----------------------------------\n");
        printf("\n--- Hospital Management System ---\n");
        printf("\n----------------------------------\n");
        printf("1 - Register patient\n");
        printf("2 - Handle treatment\n");
        printf("3 - Update hospitalizations\n");
        printf("4 - Print hospitalizations\n");
        printf("5 - Generate report\n");
        printf("0 - Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: {
                Patient p = registerPatient(autoId++);
                enqueue(queues[p.severity - 1], p);
                break;
            }
            case 2:
                handleTreatment(queues, &hospitalizations);
                break;
            case 3:
                updateHospitalization(&hospitalizations);
                break;
            case 4:
                printHospitalizations(hospitalizations);
                break;
            case 5:
                generateReport(hospitalizations, queues);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option!\n");
                break;
        }
    } while (option != 0);

    for (int i = 0; i < 4; i++) {
        destroyQueue(queues[i]);
    }

    return 0;
}
