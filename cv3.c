// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
 
    float a, b, c, x, x1, x2, discriminant_sqrt;
   
    printf ("Zadajte cleny v rovnici v tvare a b c: ");
    scanf ("%f %f %f", &a, &b, &c);
   
    discriminant_sqrt = sqrt(pow(b, 2) - 4 * a * c);
    x1 = (-b + discriminant_sqrt) / (2 * a);
    x2 = (-b - discriminant_sqrt) / (2 * a);
   
    printf ("Korene kvadratickey rovnice su: \n");
    printf ("x1 = %f\n", x1);
    printf ("x2 = %f\n", x2);

    return 0;
}
