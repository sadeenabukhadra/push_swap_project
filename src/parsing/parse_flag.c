#include "../../push_swap.h"
#include <string.h>

void	parse_flags(int argc, char **argv, t_flags *flags)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (strcmp(argv[i], "--bench") == 0)
			flags->bench = 1;
		else if (strcmp(argv[i], "--simple") == 0)
			flags->strategy = SIMPLE;
		else if (strcmp(argv[i], "--medium") == 0)
			flags->strategy = MEDIUM;
		else if (strcmp(argv[i], "--complex") == 0)
			flags->strategy = COMPLEX;
		else if (strcmp(argv[i], "--adaptive") == 0)
			flags->strategy = ADAPTIVE;
		i++;
	}
}