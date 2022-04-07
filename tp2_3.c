#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 5
#define M 7
int i,j;
int mt[N][M];

struct computadora
{
    float velocidad;
    int anioFabricacion;
    int tipoProcesador;
    int cantNucleos;
};


int main()
{
    int *p = mt;
   srand((int)time(NULL));
   for(i = 0;i<N; i++)
  {
    for(j = 0;j<M; j++)
    {
      *( p + ( i*5 + j ))= 1+rand()%100;
      printf("%d", *( p + ( i*5 + j )));
    }
    printf("\n");
 }

return 0;

}