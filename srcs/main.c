#include "./srcs/ft_printf.h"
#include <limits.h>

int	main(void)
{
	/*int p = 0, f = 0;

	//ft_printf("Hola Mundo\n");
	p = printf(" %p %p \n", 0, 0);
	f = ft_printf(" %p %p \n", 0, 0);

	if (p == f)
	{
		ft_printf("\n [ok] \n");
	}else
	{
		ft_printf("Original -> %d mio -> %d\n", p, f);
	}

	p = printf("%X \n", -1);
	f = ft_printf("%X \n", -1);

	if (p == f)
	{
		ft_printf("\n [ok] \n");
	}else
	{
		ft_printf("Original -> %d mio -> %d\n", p, f);
	}

	p = printf(" %i ", INT_MAX);
	f = ft_printf(" %i ", INT_MAX);

	if (p == f)
	{
		ft_printf("\n [ok] \n");
	}else
	{
		ft_printf("Original -> %d mio -> %d\n", p, f);
	}*/
	printf(" %p %p \n", 0, 0);
	ft_printf(" %p %p \n", 0, 0);
	
	return (0);
}
