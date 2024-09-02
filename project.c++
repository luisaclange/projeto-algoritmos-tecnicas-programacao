// O estudo da física permite entender o comportamento de vários sistemas,
// sendo a potência uma das grandezas explicada por essa área do conhecimento.
// Essa grandeza é representada no sistema internacional pela unidade Watt(W),
// e tem como objetivo determinar a quantidade de energia concedida por uma
// fonte a cada unidade de tempo. Na Figura 4 temos o gráfico de um sistema
// que monitora o funcionamento de uma máquina durante o dia.
// Em uma determinada hora do dia a máquina atinge sua potência máxima,
// indicada pelo ponto P na figura.Implemente um programa em C / C++,
// que leia e armazene 20 valores e retorne qual foi o valor máximo
// e o mínimo atingido naquele determinado dia.

#include <stdio.h>

float readValue(int indice)
{
    float value = 0;
    printf("%i - Informe a potência da máquina, em W (watts): ", indice);
    scanf("%f", &value);
    return value;
}

float biggerValue(float values[], int length)
{
    float bigger = values[0];
    for (int i = 1; i < length; i++)
    {
        if (bigger < values[i])
        {
            bigger = values[i];
        }
    }
    return bigger;
}

float smallerValue(float values[], int length)
{
    float smaller = values[0];
    for (int i = 1; i < length; i++)
    {
        if (smaller > values[i])
        {
            smaller = values[i];
        }
    }
    return smaller;
}

int main()
{
    printf("Cálculo da potência máxima e mínima de uma máquina \n\n");

    float powerReadings[20];

    for (int i = 0; i < 20; i++)
    {
        powerReadings[i] = readValue(i + 1);
    }

    float biggerReading;
    biggerReading = biggerValue(powerReadings, 20);
    printf("Maior valor: %0.2f W \n", biggerReading);

    float smallerReading;
    smallerReading = smallerValue(powerReadings, 20);
    printf("Menor valor: %0.2f W \n", smallerReading);

    printf("\n\n\n");

    return 0;
}