
  /* Q10: Structure 'PatientRecord'
        PatientID, BloodGroup, Temperature
        Identify Fever Patients (temp > 98.6 F) */

#include <stdio.h>

// Define structure
struct PatientRecord {
    int patientID;
    char bloodGroup[5];  // e.g., A+, B-, O+, AB+
    float temperature;   // in Fahrenheit
};

int main() {
    int n, i;
    int feverCount = 0;

    printf("Enter number of patients: ");
    scanf("%d", &n);

    struct PatientRecord patients[n];

    // Input patient records
    for (i = 0; i < n; i++) {
        printf("\n--- Patient %d ---\n", i + 1);
        printf("Patient ID: ");
        scanf("%d", &patients[i].patientID);
        printf("Blood Group: ");
        scanf("%s", patients[i].bloodGroup);
        printf("Temperature (F): ");
        scanf("%f", &patients[i].temperature);
    }

    // Identify fever patients
    printf("\n========================================\n");
    printf("   PATIENTS WITH FEVER (Temp > 98.6 F)\n");
    printf("========================================\n");
    printf("%-12s %-12s %-12s\n", "PatientID", "BloodGroup", "Temperature");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++) {
        if (patients[i].temperature > 98.6) {
            printf("%-12d %-12s %-12.1f F\n",
                   patients[i].patientID,
                   patients[i].bloodGroup,
                   patients[i].temperature);
            feverCount++;
        }
    }

    if (feverCount == 0) {
        printf("No patients with fever found.\n");
    } else {
        printf("----------------------------------------\n");
        printf("Total fever patients: %d out of %d\n", feverCount, n);
    }

    return 0;
}
