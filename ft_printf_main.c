#include "ft_printf.h"
# include "libft/libft.h"

int main(int argc, char **argv)
{
	if (argc < 1)
		return(1);
	
	int test1;
	char *test2;
	test1 = ft_atoi(argv[1]);
	test2 = argv[2];

	ft_printf("|***********************************************|\n");
	ft_printf("|			test			|\n");
	ft_printf("|-------------------[nombre]--------------------|\n");
	ft_printf("|decimal d	:%d				|\n",test1);
	ft_printf("|decimal u	:%u				|\n",test1);
	ft_printf("|decimal x	:%x				|\n",test1);
	ft_printf("|decimal X	:%X				|\n",test1);
	ft_printf("|--------------[chaine de caractere]------------|\n");
	ft_printf("|string    s	:%s				|\n",test2);
	ft_printf("|pointeur  p	:%p			|\n",test2);
	ft_printf("|***********************************************|\n");
	return (0);
}