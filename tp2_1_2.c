#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

int main()
{
    
    
    int i;
    int vt[N];

    int *p = vt;

    srand((int)time(NULL));

    for(i = 0; i<N; i++)
    {
       p[i]= rand()%100 + 1;
       printf("%d", p[i]);
       
    }

    return 0;
}
