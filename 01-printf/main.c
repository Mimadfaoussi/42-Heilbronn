#include "ft_printf.h"

int main(void)
{
	int	i = 222;
	int *j = &i;
	int x = printf("%p\n",LONG_MIN);
	int y = ft_printf("%p\n",LONG_MIN);
	if (x == y)
		printf("success\n");
	return (0);
}
