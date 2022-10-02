#include <stdio.h> 
 
int main() { 
    float priemer_kolesa, vzdialenost_trasy, result; 
    const float palec_cm = 2.54, pi = 3.14000; 
     
    printf ("Zadajte priemer kolesa v palcoch: ");   
    scanf ("%f", &priemer_kolesa); 
     
    printf ("Zadajte vzdialenost v km: ");   
    scanf ("%f", &vzdialenost_trasy); 
     
    float vzdialenost_kolesa = pi * priemer_kolesa * palec_cm; 
     
    result = vzdialenost_trasy * 100000 / vzdialenost_kolesa; 
 
    printf ("Koleso sa na ceste otoci %f krat.", result); 
 
    return 0; 
}
