/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>
#include <math.h>
// TODO: your code goes here
double compute_hypotenuse(leg_a, leg_b, Hypotenuse){
  double Hypotenuse = 0; 
  Hypotenuse = sqrt((leg_a *leg_a) + (leg_b *leg_b));
  return Hypotenuse;
}
int main(void) {
  double leg_a = 0, leg_b = 0;
  printf("Kathete a:");
  scanf("%lf", &leg_a);
  printf("Kathete b:");
  scanf("%lf", &leg_b);
  printf("%lf", compute_hypotenuse(leg_a, leg_b));

  return 0;
}
