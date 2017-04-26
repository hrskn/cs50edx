#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) 
{
 int height;
 
 
 do {
    printf("Height: ");
    height = get_int();
} while(height < 0 || height > 23);

if (height == 0){
    return 0;
}
 for(int lineheight=2; lineheight < height+2; lineheight++) {
     int space;
        for(space = height-lineheight; space >= 0; space--) {
            printf(" ");
        }
     
         for(int linewidth=0; linewidth < lineheight;linewidth++) {
         
          printf("#");
        }
    printf("\n");
 }
 
 
}
    
