#include <stdio.h>

int main() {
    float hours, wage, grossPay, taxes, netPay;
    float overtimeHours, regularHours = 40.0;
    float overtimeRate = 1.5;
    float taxRate1 = 0.15, taxRate2 = 0.20;
    float taxThreshold = 600.0;

    // Request user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // Calculate gross pay
    if (hours > regularHours) {
        overtimeHours = hours - regularHours;
        grossPay = (regularHours * wage) + (overtimeHours * wage * overtimeRate);
    } else {
        grossPay = hours * wage;
    }

    // Calculate taxes
    if (grossPay <= taxThreshold) {
        taxes = grossPay * taxRate1;
    } else {
        taxes = (taxThreshold * taxRate1) + ((grossPay - taxThreshold) * taxRate2);
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Print results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}