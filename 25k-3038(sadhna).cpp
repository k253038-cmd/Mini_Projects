#include <stdio.h>
#include <math.h>

int main() {
    double E, A, theta, flux;

    // Ask user for inputs
    printf("Enter the magnitude of the electric field (E) in N/C: ");
    scanf("%lf", &E);

    printf("Enter the area of the surface (A) in m^2: ");
    scanf("%lf", &A);

    printf("Enter the angle (theta) between E and the area vector in degrees: ");
    scanf("%lf", &theta);

    // Convert angle from degrees to radians
    double theta_radians = theta * M_PI / 180.0;

    // Calculate electric flux
    flux = E * A * cos(theta_radians);

    // Print the result
    printf("The electric flux (fE) through the surface is: %.2lf N·m²/C\n", flux);

    return 0;
}


