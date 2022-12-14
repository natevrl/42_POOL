#include "headers.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if (ft_strlen(argv[2]) != 1)
	{
		write(1, "0\n", 2);
		return (1);
	}
	if (argv[2][0] == '+')
		ft_plus(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '-')
		ft_minus(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '*')
		ft_mult(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '/')
		ft_div(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '%')
		ft_mod(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
		write(1, "0\n", 2);
}
