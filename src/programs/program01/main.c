/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv) {
   // write your solution here
   int number = 0;
   printf("Geben sie eine Zahl ein: \n");
   scanf("%d" ,&number);
   if (number > 0){
   for (int i = 0; i = number; i = i +1)
   printf("%d ", i);
   }else{
   for (int i = 0; i = number; i = -1)
   printf ("%d" , i);
   }
}
