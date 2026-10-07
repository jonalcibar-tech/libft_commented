/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_comm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 08:28:14 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/07 12:12:05 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//función upper para probar que funciona ft_striteri al llamarla
//en vez de modicar un nuevo string que creaba ft_strmapi Modifica el primer caracter
// (pos = 0) de l string s.
// en la fución lo deponemos como ...t pos, char *s) con asteristico para decirle que
//es un puntero, osea dirección de memoria a un caracter (o string) s, no el caracter s
//en si. Suena paradojico, si yo hubiese escrito C, lo pondría char ...t pos, char &s)
/*
static void	upper(unsigned int pos, char *s)
{
	if ((pos == 0) && (*s >= 'a') && (*s <= 'z'))
		*s = (*s - 32);
}
*/

// llama a la funcion que haya en (*f) en este caso le hemos pasado ft_upper
// iterando caracter por caracter 
void	ft_striteri(char *s, void (*f)(unsigned int pos, char *c))
{
	unsigned int	i;

//ojo que no pongo return (NULL) o return (0) ya que una función void no devuelve nada
	if (s == NULL || (*f) == NULL)
		return ;
	i = 0;
	while (s[i])
	{
//como a (*f) le he pasado "upper" ejecutará upper(i, &s[i]) y debo poner & para que pase la direccción
//se memoria donde esta el caracter, tal y como espera upper (...*char)
		(*f)(i, &s[i]);
		i++;
	}
}

/*
int	main(void)
{
	char	s[] = "pedro";

	ft_striteri(s, upper);
	printf("%s", s);
}
*/
/*
void ft_striteri(char *s, void (*f)(unsigned int,char*));
s: La cadena sobre la que iterar.
f: La función a aplicar sobre cada carácter.
Valor devuelto Nada
Funciones autorizadas
Ninguna
Descripción Aplica la función ‘f’ a cada carácter de la string
‘s’, pasando como parámetros el índice de cada
carácter dentro de ‘s’ y la dirección del propio
carácter, que puede modificarse si es necesario.
*/