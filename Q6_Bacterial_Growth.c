
  /* Q6: Bacterial Culture Growth Rate
       Given: Initial Population, Final
       Population, and Time*/

#include <stdio.h>
#include <math.h>

/* Function to calculate growth rate.
   Formula: r = (ln(Nf/Ni)) / t
   Where: Nf = final population, Ni = initial population, t = time */
float growthRate(float Ni, float Nf, float t) {
    if (Ni <= 0 || t <= 0) {
        printf("Error: Initial population and time must be > 0\n");
        return -1;
    }
    if (Nf < Ni) {
        printf("Error: Final population cannot be less than initial.\n");
        return -1;
    }
    return log(Nf / Ni) / t;
}

int main() {
    float Ni, Nf, t, r;

    printf("Enter initial population: ");
    scanf("%f", &Ni);
    printf("Enter final population: ");
    scanf("%f", &Nf);
    printf("Enter time (hours): ");
    scanf("%f", &t);

    r = growthRate(Ni, Nf, t);

    if (r >= 0) {
        printf("Growth Rate (r) = %.4f per hour\n", r);
    }

    return 0;
}

