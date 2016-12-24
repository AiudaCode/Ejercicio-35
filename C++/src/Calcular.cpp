#include "Calcular.h"

Calcular::Calcular()
{
    //ctor
}

Calcular::~Calcular()
{
    //dtor
}

// implementacion de los metodos Setter y Getters de los atributos de la clase Calcular
void Calcular::setMatriz(int fil, int col, int val)
{
    // le asignare a la matriz el valor de val, en la posicion fil, col que se hayan pasado como parametro
    matriz[fil][col] = val;
}

int Calcular::getMatriz(int fil, int col)
{
    // retornare el valor que haya en la fil, col que se haya pasado como parametro
    return matriz[fil][col];
}


// implemnetacion del metodo para dibujar la matriz
void Calcular::dibujarMatriz()
{
    // declarare de una variable temporal de tipo entero temp_1 y una variable val
    int temp_1, val;
    // declaro e inicializo la variable temp_2 en 1
    int temp_2 = 1;

    // recorrere con el primer ciclo for las filas (i)
    for (int i = 0; i < 9; i++)
    {
        // recorrrere con el segundo ciclo for las columnas (j)
        for (int j = 0; j < 9; j++)
        {
            // si estamos en la fila 0, (primera fila)
            if (i == 0)
            {
                // entonces le asignare en la fila i, columna j el valor de que tenga actualmente temp_2
                setMatriz(i, j, temp_2);
                // incremento temp_2 en 1
                temp_2++;
            }
            else // sino
            {
                // le asigno a la variable temp_1 el valor actual de i mas 1
                temp_1 = i+1;
                // le asigno a la variable val el valor actual de temp_1
                val = temp_1;

                // con el cilo do...while
                do
                {

                    // hare que se le asignare en la posicion i, j el valor actual de temp_1
                    setMatriz(i, j, temp_1);
                    // e incremento la variable val en 1
                    val--;
                }
                while (val > 0); // repetire las instrucciones anteriores mientras la variable val sea mayor que 0

                // si la variable val es igual a cero
                if (val == 0)
                {
                    // entonces le asignare a la variable temp_1 el valor actual de i mas 1
                    temp_1 = i+1;
                    // le asigno en la fila i, columna j, el valor de temp_1
                    setMatriz(i, j, temp_1);
                    // incremento temp_1 en 1
                    temp_1++;
                }
            }
        }
    }
}
