/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv) {
  int16_t count = 1;
  // write your solution here
  int dice = 1;
while ((dice > 0) && (dice < 7))
{
  
  printf("%d\n\n", dice); 
  
  scanf("%d" , &dice);
  count += 1;

} 

  printf("Du hast %d Mal gültig gewürfelt.", count);
}
