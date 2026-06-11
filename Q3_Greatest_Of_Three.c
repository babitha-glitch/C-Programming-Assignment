/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* ==========================================
   Q3: Greatest Among Three Numbers
       Using Nested if-else Statements
   ========================================== */

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Nested if-else to find greatest
    if (a >= b) {
        if (a >= c) {
            printf("Greatest number is: %d\n", a);
        } else {
            printf("Greatest number is: %d\n", c);
        }
    } else {
        if (b >= c) {
            printf("Greatest number is: %d\n", b);
        } else {
            printf("Greatest number is: %d\n", c);
        }
    }

    return 0;
}
