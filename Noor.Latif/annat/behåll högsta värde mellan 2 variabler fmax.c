#include <stdio.h>
#include <math.h>
int main () {
  double temp, maxtemp; 
    printf("M�ndag? ");
    scanf("%lf", &temp);
    maxtemp = temp;
    printf("Tisdag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("Onsdag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("Torsdag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("Fredag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("L�rdag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("S�ndag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("H�gsta temperatur: %.2f", maxtemp);
}