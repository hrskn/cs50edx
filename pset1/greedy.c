#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
int main(void) 
{
 
 int count = 0;
 float owed;
 do {
    printf("O hai! How much change is owed? \n");
    owed = get_float();
} while(owed <= 0);
int amount =  round(owed * 100);
while(amount > 0) {
    
     if (amount - 25 >= 0) {
         amount-= 25;
         count++;
     }
     else if (amount - 10 >= 0) {
          amount-= 10;
         count++;
     }
      else if (amount - 5 >= 0) {
         amount -= 5;
         count++;
     }
      else if (amount - 1 >= 0) {
         amount -= 1;
         count++;
     }
    
}
printf("%i\n",count);
}
