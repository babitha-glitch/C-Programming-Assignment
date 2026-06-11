/* 
   Q8: DNA Sequence - GC Content
       Character Array (A, T, G, C) */
  

#include <stdio.h>
#include <string.h>

int main() {
    char dna[100];
    int i, len;
    int count_G = 0, count_C = 0;
    float gc_content;

    printf("Enter DNA sequence (A, T, G, C only): ");
    scanf("%s", dna);

    len = strlen(dna);

    // Count G and C bases
    for (i = 0; i < len; i++) {
        if (dna[i] == 'G' || dna[i] == 'g') {
            count_G++;
        } else if (dna[i] == 'C' || dna[i] == 'c') {
            count_C++;
        }
    }

    // Calculate GC content percentage
    if (len > 0) {
        gc_content = ((float)(count_G + count_C) / len) * 100;
    } else {
        gc_content = 0;
    }

    printf("\n----- GC Content Analysis -----\n");
    printf("Sequence Length : %d\n", len);
    printf("G Count         : %d\n", count_G);
    printf("C Count         : %d\n", count_C);
    printf("GC Content      : %.2f%%\n", gc_content);

    return 0;
}
