#include "ft_printf.h"

int main(void)
{
	int	i = ft_printf("%X\n",42);
	int j = printf("%X\n", 42 );
	printf("%p    %p\n",&i,&j);
	ft_printf("%p     %p\n",&i, &j);
	return (0);
}
