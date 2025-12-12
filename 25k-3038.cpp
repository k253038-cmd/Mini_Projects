#include <stdio.h>

int main() {
    double C1, C2, C3, Ceq;
    char choice;

    // Input capacitor values
    printf("Enter the value of C1 (in microfarads, uF): ");
    scanf("%lf", &C1);

    printf("Enter the value of C2 (in microfarads, uF): ");
    scanf("%lf", &C2);

    printf("Enter the value of C3 (in microfarads, uF): ");
    scanf("%lf", &C3);

    // Ask user for configuration choice
    printf("Enter 'S' for Series or 'P' for Parallel: ");
    scanf(" %c", &choice);  // note the space before %c to consume any leftover newline

    // Calculate equivalent capacitance
    if (choice == 'S' || choice == 's') {
        if (C1 == 0 || C2 == 0 || C3 == 0) {
            printf("Error: Capacitor value cannot be zero in series.\n");
            return 1;
        }
        Ceq = 1.0 / (1.0/C1 + 1.0/C2 + 1.0/C3);
        printf("The equivalent capacitance in series is: %.2lf uF\n", Ceq);
    }
    else if (choice == 'P' || choice == 'p') {
        Ceq = C1 + C2 + C3;
        printf("The equivalent capacitance in parallel is: %.2lf uF\n", Ceq);
    }
    else {
        printf("Invalid choice! Please enter 'S' or 'P'.\n");
    }

    return 0;
}

