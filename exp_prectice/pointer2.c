#include <stdio.h>

int main()
{
    int (*p)[3];

    int a[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    p = a;

    printf("%d \n", **(p) );
    printf("%d \n", **( p+1) + 1 );
    printf("%d = %d \n",  *( *(p+2) + 2 ) , ( *(p+2) + 2 ) );
    

    return 0;
}