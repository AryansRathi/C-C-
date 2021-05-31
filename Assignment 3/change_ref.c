/*
CH-230-A
a3 p10.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);
int main()
{
    float f1, f2, *ptr, pro1, *ptr_2, *ptr_3;
    printf("Enter a float values\n");
    scanf("%f %f", &f1, &f2);
    pro1 = product(f1, f2);
    ptr = &pro1;
    ptr_2 = &f1;
    ptr_3 = &f2;
    productbyref(f1, f2, ptr);
    modifybyref(ptr_2, ptr_3);
    printf("The product if two values is %f\n", pro1);
    printf("The product by reference %f\n", *ptr); //product by reference.
    printf("The change is %f\n %f\n", *ptr_2, *ptr_3);
    return 0;
}
float product(float a, float b)
{
    float p;
    p = a * b;
    return p;
}
void productbyref(float a, float b, float *p)
{
    float pr;
    pr = a * b;
    p = &pr;
}
void modifybyref(float *a, float *b)
{
    *a = *a + 3;
    *b = *b + 11;
}