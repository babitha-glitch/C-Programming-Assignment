
 /*Q4 Concentration of Solution C = m/V
       for Multiple Samples using for loop*/
 
#include <stdio.h>

int main() {
    int n, i;
    float mass, volume, concentration;

    printf("Enter number of samples: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\n--- Sample %d ---\n", i);
        printf("Enter mass of solute (g): ");
        scanf("%f", &mass);
        printf("Enter volume of solution (L): ");
        scanf("%f", &volume);

        if (volume != 0) {
            concentration = mass / volume;
            printf("Concentration (C) = %.3f g/L\n", concentration);
        } else {
            printf("Error: Volume cannot be zero!\n");
        }
    }

    return 0;
}
