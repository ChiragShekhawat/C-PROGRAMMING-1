#include <stdio.h>
int main()
{
    float hr, min;
    printf("enter minutes");
    scanf("%f",&min);
    hr=min/60;
    printf("minutes converted to hour is %f",hr);
    return 0;
}
