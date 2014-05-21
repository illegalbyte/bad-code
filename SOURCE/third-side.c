#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // This asks for sides A + B, stores them in Float Variables tri1 and tri2
    float tri1, tri2;
    do
    {
        printf("What are the two sides of your right-angle triangle?\n\nSide A:  ");
        
        tri1 = GetFloat();
        printf("\nSide B:  ");
        tri2 = GetFloat();
    }
    while(tri1 < 0 || tri2 < 0);
    
    printf("%.2f%c + %.2f%c", tri1, 178, tri2, 178);


}
