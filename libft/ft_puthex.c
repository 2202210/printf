#include "libft.h"

// convert hex to int
void	ft_puthex(unsigned int n)
{
	if (n >= 16)
	{
		ft_puthex(n / 16);
	}
	write(1, &"0123456789abcdef"[n % 16], 1);
}
