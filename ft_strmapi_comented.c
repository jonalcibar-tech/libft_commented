/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_comented.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:57:03 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/07 08:13:00 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Es una función estática a la que llamaremos para ver si ft__mapi.com
Recibe pos (posición de caracter (0,1,2...) en string s) si es 0 (primera letra de string)
Lo pasa a mayusculas (podria reescribir con ej. if (pos == 2) y pondría el tercer caracter
en mayúsculas.

static char	upper(unsigned int pos, char s)
{
//si pos = 0 (primera letra) y és una minúscula entre a y z, pásalo a mayusculas
	if ((pos == 0) && (s >= 'a') && (s <= 'z')) 
	{
		return (s - 32);
	}
//si no, no hagas nada, devuelve el propio caracter original
	else
	{
		return (s);
	}
}
*/
// ft_strmapi:  aplica a *s la función *f (en este caso es "upper" con argumentos:
//pos, que es posición , caracter[posición en string]))

char	*ft_strmapi(char const *s, char (*f)(unsigned int pos, char c))
{
	unsigned int	i;
	char			*s_upper;
// si s es NULL o la funcion (*f) es NULL devuelve NULL
	if(s == NULL || (*f) == NULL)
		return (NULL);
// guardame un string de caracteres s_upper del tamaño s + 1 para el \0	
	s_upper = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s_upper)
		return (NULL);
//itera s aplicando (*f) en este upper a cada caracter hasta el final
//y hara lo que hace upper, poner el primer caracyer (i = 0) en mayuscula 
	i = 0;
	while (s[i])
	{
		s_upper[i] = (*f)(i, s[i]);
		i++;
	}
//pon el \0 final y devuelve el nuevo string con la primera em mayúscula
	s_upper[i] = '\0';
	return (s_upper);
}
/*
int	main(void)
{
	char const		*s = "pedro";

	printf("%s", ft_strmapi(s, upper));
}
*/
/*
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
s: La cadena sobre la que iterar.
f: La función a aplicar sobre cada carácter.
Valor devuelto La cadena creada tras el correcto uso de ‘f’ sobre cada carácter.
NULL si falla la reserva de memoria.
Funciones autorizadas malloc
Descripción Aplica la función ‘f’ a cada carácter de la cadena
‘s’, pasando su índice como primer argumento y el propio carácter como segundo
argumento. Se crea una nueva cadena (utilizando malloc(3)) para almacenar
los resultados de las sucesivas aplicaciones de ‘f’.
*/