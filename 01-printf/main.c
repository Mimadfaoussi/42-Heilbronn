#include "ft_printf.h"

int main(void)
{
	int	i;

	i = -9;
	ft_printf("%p\n", (void *)-14523);
	printf("%p\n", (void *)-14523);
	return (0);
}
