#include <stdio.h>

int main() {
    int narodenie_d, narodenie_m, narodenie_r;
    int dnes_d, dnes_m, dnes_r;
    const int days_in_year = 365, days_in_month = 30;

    printf ("Zadajte datum narodenia v tvare DD MM RRRR: ");
    scanf ("%d %d %d", &narodenie_d, &narodenie_m, &narodenie_r);
    printf ("Zadajte dnesny datum v tvare DD MM RRRR: ");
    scanf ("%d %d %d", &dnes_d, &dnes_m, &dnes_r);

    int total_birth_days = narodenie_r * days_in_year + narodenie_m * days_in_month + narodenie_d;

    int total_today_days = dnes_r * days_in_year + dnes_m * days_in_month + dnes_d;

    int result =  total_today_days - total_birth_days;
     
     printf ("Od narodenia uplynulo priblizne %d dni. \n", result);

    return 0;
}
