#include "allheaders.h"

int view_top(int matrix[6][6])
{
    int counter;
    int counter2;
    int i;
    int j;
    int k;
   
    j = 1; // Recorremos desde la segunda columna
    while (j <=4)
    {
        i = 2; // Recorremos desde la tercera fila
        counter = 1; // Por cada columna quiero un contador
        while (i<=4)
        {
            counter2 = 1 ;  // Empieza en 1, para la posicion luego
            k = i -1;
            while (k >=1)
            {  
                if (matrix[i][j] > matrix[k][j])
                {
                    counter2 = counter2 + 1;
                }
                k = k - 1;
            }
           
            if (counter2 == i)
            {
                counter = counter + 1;
            }
            i = i + 1;
        }
        if (counter != matrix[0][j])
        {
            return (1);
        }
        j = j + 1;
        printf("%s", " ");
    }
    return (0);
}

int view_left(int matrix[6][6])
{
    int counter;
    int counter2;
    int i;
    int j;
    int k;
   
    i = 1; // Recorremos desde la segunda fila
    while (i <=4)
    {
        j = 2; // Recorremos desde la tercera columna
        counter = 1; // Por cada fila quiero un contador
        while (j<=4)
        {
            counter2 = 1 ;  // Empieza en 1, para la posicion luego
            k = j -1;
            while (k >=1)
            {  
                if (matrix[i][j] > matrix[i][k])
                    counter2 = counter2 + 1;
                k = k - 1;
            }
           
            if (counter2 == j)
                counter = counter + 1;
            j = j + 1;
        }
        if (counter != matrix[i][0])
            return (1);
        i = i + 1;
    }
    return (0);
}

// Funcion que llama a las dos anteriores
int visibility(int matrix[6][6])
{
    int result_left;
    int result_top;
    result_left = view_left(matrix);
    if (result_left == 0)
    {
        result_top = view_top(matrix);
        if (result_top == 0)
        {
            return (0);
        }
        else
            return (1);
    }
    else
        return (1);
}