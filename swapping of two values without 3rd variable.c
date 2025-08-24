#include <stdio.h>
int main()
{
    float a,b;
    printf("ENTER FIRST NUMBER: ");
    scanf("%f",&a);
    printf("ENTER SECOND NUMBER: ");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("SWAPPED VALUE OF FIRST NUMBER: %f",a);
    printf("\nSWAPPED VALUE OF SECOND NUMBER: %f",b);
    return 0;
}
