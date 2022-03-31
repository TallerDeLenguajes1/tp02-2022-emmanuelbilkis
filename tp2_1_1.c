#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

int main()
{
    
    
    int i;
    int vt[N];

    srand((int)time(NULL));

    for(i = 0; i<N; i++)
    {
       vt[i]= rand()%100 + 1;
       printf("%d", vt[i]);
    }

    return 0;
}
