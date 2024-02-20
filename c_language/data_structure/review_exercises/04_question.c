#include <stdio.h>
#include <float.h>
int main() {
    int num_children, num_people_over_4_children = 0, total_children = 0, num_people = 0;
    float salary, max_salary = FLT_MIN, min_salary = FLT_MAX;

    while (1) {
        printf("Enter salary (negative to end): ");
        scanf("%f", &salary);

        if (salary < 0) {
            break;
        }

        printf("Enter number of children: ");
        scanf("%d", &num_children);

        num_people++;

        if (num_children > 4) {
            num_people_over_4_children++;
        }

        total_children += num_children;

        if (salary > max_salary) {
            max_salary = salary;
        }

        if (salary < min_salary) {
            min_salary = salary;
        }
    }

    if (num_people > 0) {
        printf("Number of people with more than 4 children: %d\n", num_people_over_4_children);
        float average_children = (float)total_children / num_people;
        printf("Average number of children: %.2f\n", average_children);
        printf("Maximum salary: %.2f\n", max_salary);
        printf("Minimum salary: %.2f\n", min_salary);
    } else {
        printf("No data entered.\n");
    }

    return 0;
}
