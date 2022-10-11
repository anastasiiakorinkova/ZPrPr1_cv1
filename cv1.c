#include <stdio.h>

int main() {
    float fahr, result;
    
    printf ("Zadajte pocet stupnov Fahrenheita: ");  
    scanf ("%f", &fahr);
    
    result = (fahr - 32) * 5 / 9;

    printf ("%f Fahrenheita je %f Celsius", fahr, result);

    return 0;
}
