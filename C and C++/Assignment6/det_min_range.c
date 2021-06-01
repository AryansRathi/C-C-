/*
CH-230-A
a6 p1.[c or cpp or h]
Firstname Lastname
myemail@jacobs-university.de
*/
#include <stdio.h>
#define small(n, m, k)                                     \
    {                                                      \
        small = n < m ? (n < k ? n : k) : (m < k ? m : k); \
    }
#define large(n, m, k)                                     \
    {                                                      \
        large = n > m ? (n > k ? n : k) : (m > k ? m : k); \
    }
int main()
{
    int n, m, k, small, large;
    float mid;
    //Enter the value
    scanf("%d %d %d", &n, &m, &k);
    small(n, m, k);
    large(n, m, k);
    mid = (small + large) / 2.0;
    printf("The mid-range is: %f\n", mid);
    return 0;
}