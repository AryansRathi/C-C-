/*
CH-230-A
a4 p10.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <math.h>
#include <stdio.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb);
int main()
{
    //float x = 0, y = 0, z = 0, h = 0;
    float a, b, *ptr, *ptr_2, *ptr_3, *ptr_4;
    //ptr = &x;
    //ptr_2 = &y;
    //ptr_3 = &z;
    //ptr_4 = &h;
    printf("Enter the floats\n");
    scanf("%f %f", &a, &b);
    proddivpowinv(a, b, &ptr, &ptr_2, &ptr_3, &ptr_4);
    return 0;
}
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = a * b;
    printf("The product is %f\n", *prod);
    *div = a / b;
    printf("The division is %f\n", *div);
    *pwr = pow(a, b);
    printf("a^b is %f\n", *pwr);
    *invb = 1 / b;
    printf("1/b is %f\n", *invb);
}