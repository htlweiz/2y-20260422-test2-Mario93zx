/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

// TODO: your code goes here
double Celsius2Fahrenheit(double temp_celsius, double fahrenheit);{
 double fahrenheit = (temp_celsius * 1,8) + 32;
 return fahrenheit;
}
int main(void) {
  double temp_celsius = 0;
  printf("Geben sie eine Temperatur ein: ");
  scanf("%lf", &temp_celsius);

  printf("%f", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
