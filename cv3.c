#include <stdio.h>
#include <math.h>

int main() {
     float polomer, obvod_kruznice, obsah_kruhu, objem_gule, povrch_gule;
     const float pi = 3.14;
     const float  pie=3.14; 
     
     printf ("Zadajte polomer: ");
     scanf ("%f", &polomer);
     
     obvod_kruznice = 2 * pi * polomer;
     obsah_kruhu = pi * pow(polomer, 2);
     objem_gule = (4 * pi * pow(polomer, 3)) / 3;
     double  volume=(4.0/3.0)*pie*pow(polomer, 3);
     povrch_gule = 4 * pi * pow(polomer, 2);
     
     printf ("Obvod kruznice = %f \n", obvod_kruznice);
     printf ("Obsah kruhu = %f \n", obsah_kruhu);
     printf ("Objem gule = %f \n", objem_gule);
     printf ("Objem gule1 = %f \n", volume);
     printf ("Povrch gule = %f \n", povrch_gule);
     
    return 0;
}
