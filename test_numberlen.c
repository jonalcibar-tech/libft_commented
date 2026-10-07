//Length of a long number in characters, including the '-' if negative

#include	"libft.h"

static size_t ft_len(long n)
{
	size_t	len;
	size_t  i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n)
		{
			n /= 10;
			i++;
		}
	return (i);
}
int main (void)
{
	long n = -123456;

	printf("%zu", ft_len(n));
}