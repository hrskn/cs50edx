#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    int n;
    do {
        printf("Minutes: ");
        n = get_int();
    }
    while (n <= 0);
    int x =  128 * (1.5 * n) / 16;
    
    printf("Bottles: %i\n", x); 
}