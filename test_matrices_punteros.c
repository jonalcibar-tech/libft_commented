#include "libft.h"

int main()
{
	// Declaramos nuestra matriz de 2 filas y 3 columnas
	int matriz [2][3]= {{10, 20, 30}, // Fila 0
	{40, 50, 60}   // Fila 1
};
	
printf("--- 1. PRUEBA DE TAMAÑOS (sizeof) ---\n");
printf("Tamaño de un solo entero (int):   %zu bytes\n", sizeof(int));
printf("Tamaño de una fila (matriz[0]):    %zu bytes (3 enteros)\n", sizeof(matriz[0]));
printf("Tamaño total (matriz):             %zu bytes (6 enteros)\n\n", sizeof(matriz));

printf("--- 2. DIRECCIONES DE MEMORIA ---\n");
// %p sirve para imprimir direcciones de memoria en formato hexadecimal
printf("Direccion de inicio (matriz):     %p\n", (void*)matriz);
printf("Direccion de la Fila 0:           %p\n", (void*)&matriz[0]);
printf("Direccion del primer numero (10): %p\n\n", (void*)&matriz[0][0]);

// ¡Ojo! Las tres direcciones anteriores son EXACTAMENTE la misma,
// lo que cambia es cómo C interpreta el "zoom" en ese punto de inicio.
printf("--- 3. ARITMÉTICA DE PUNTEROS (El salto de fila) ---\n");
printf("Direccion de matriz:              %p\n", (void*)matriz);
printf("Direccion de matriz + 1:          %p\n", (void*)(matriz + 1));

// Si restamos las dos direcciones reales en memoria para ver la distancia física:
unsigned char *ptr1 = (unsigned char *)matriz;
unsigned char *ptr2 = (unsigned char *)(matriz + 1);
printf("Distancia real en bytes:          %ld bytes\n\n", (long)(ptr2 - ptr1));

printf("--- 4. ACCESO A DATOS CON ASTERISCOS ---\n");
// matriz + 1 salta a la fila 1.
// *(matriz + 1) entra en la fila 1.
// *(matriz + 1) + 1 avanza a la columna 1 (el segundo número de esa fila).
// El asterisco de más afuera extrae el valor.
printf("Valor en matriz[1][1] usando corchetes: %d\n", matriz[1][1]);
printf("Valor usando solo punteros:            %d\n", *(*(matriz + 1) + 1));

return 0;
}