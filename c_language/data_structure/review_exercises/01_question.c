#include <stdio.h>
int main() {
    int hours_worked = 40; // Example: 40 hours worked
    float minimum_salary = 1000.0; // Example: minimum salary of $1000
    int extra_hours = 10; // Example: 10 extra hours
    float hourly_wage = minimum_salary / 8;
    float extra_hourly_wage = minimum_salary / 4;

    float salary_to_receive = hours_worked * hourly_wage + extra_hours * extra_hourly_wage;
    printf("The salary to receive is: $%.2f\n", salary_to_receive);

    return 0;
}
