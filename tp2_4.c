#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#define MAX 5
#define MAX_LENGTH 100
#define NUM_STRINGS 10

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} typedef compu;

void mostrar (compu *computadora,int cant);
void masVeloz (compu *computadora,int cant);
void masVieja(compu *computadora,int cant);

int main()
{
    compu computadoras[MAX];
    compu *p_cpu=computadoras;
    srand((int)time(NULL));
    char tipos[MAX_LENGTH][NUM_STRINGS] = {{"Intel"}, {"AMD"}, {"Celeron"}, {"Athlon"}, {"Core"}, {"Penti um"}};

    for (int i = 0; i < MAX; i++)
    {
        p_cpu->velocidad = rand()%2 + 1;
        p_cpu->cantidad= rand()%7 + 1;
        p_cpu->anio= rand()%7 + 2015 ; // 2015 y 2022
        int aleat = rand()%5;
        p_cpu->tipo_cpu = tipos[aleat];
        p_cpu++;
    }

    p_cpu = computadoras;

    mostrar(p_cpu,MAX);
    masVieja(p_cpu,MAX);
    masVeloz(p_cpu,MAX);


    return 0;
}

void mostrar (compu *computadora,int cant){

    
    for (int i = 0; i < cant; i++)
    {
        printf("\n Computadora %d)\n", i+1);
        printf("Velocidad: %d Gherz \n ",computadora->velocidad);
        printf("Cantidad: %d\n",computadora->cantidad);
        printf("Anio: %d\n",computadora->anio);
        printf("Tipo: %s",computadora->tipo_cpu);
        computadora++;
    }
    
}


void masVieja(compu *computadora,int cant){

    int mayor = 2022;
    int num;
    for (int i = 0; i < cant; i++)
    {
        if (computadora->anio < mayor)
        {
             mayor = computadora->anio;
             num = i+1;
        }

        computadora++;
    }

    printf("\n La compu mas antigua es la numero %d), del anio %d \n",num,mayor);
    
}

void masVeloz (compu *computadora,int cant){

    int mayor = 0;
    int num;

    for (int i = 0; i < cant; i++)
    {
        if (computadora->velocidad > mayor)
        {
             mayor = computadora->velocidad;
             num = i+1;
        }

        computadora++;
    }

    printf("\n La compu mas rapida es la numero %d), de velocidad %d \n",num,mayor);
}