// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2026/03/14 15:58:28 by sabu-kha          #+#    #+#             */
// /*   Updated: 2026/03/14 15:58:36 by sabu-kha         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "../push_swap.h"

// // // ===== INIT STACK FROM ARGS =====
// // int init_stack_from_args(t_stack *a, int argc, char **argv)
// // {
// //     int i;
// //     int value;

// //     for (i = 1; i < argc; i++)
// //     {
// //         value = ft_atoi(argv[i]);
// //         if (!is_valid_number(argv[i])||!ft_atol)
// //         {
// //             write(2, "Error\n", 6);
// //             return (0);
// //         }
// //     }
// //     return (1);
// // }

// // // ===== MAIN =====
// // int main(int argc, char **argv)
// // {
// //     t_stack a;
// //     t_stack b;
// //     t_ops ops;

// //     if (argc < 2)
// //         return (0);

// //     init_stack(&a, NULL, 0);
// //     init_stack(&b, NULL, 0);
// //     //init_ops(&ops);

// //     if (!init_stack_from_args(&a, argc, argv))
// //         return (1);

// //     adaptive_sort(&a, &b, &ops);

// //     free_all_stacks(&a, &b);
// //     return (0);
// // }

// int main(int argc, char **argv)
// {
//     t_stack     a;
//     t_stack     b;
//     t_ops       ops;
//     t_flags     flags;

//     if (argc < 2)
//         return (0);

//     a.top = NULL;
//     a.size = 0;
//     b.top = NULL;
//     b.size = 0;

//     ops = (t_ops){0};
//     flags = (t_flags){0};

//     parse_flags(argc, argv, &flags);

//     parse_input(argc, argv, &a);

//     if (!is_sorted(&a))
//     {
//         if (flags.strategy == ADAPTIVE || flags.strategy == 0)
//             adaptive_sort(&a, &b, &ops);
//         else if (flags.strategy == SIMPLE)
//             insertion_sort(&a, &b, &ops);
//         else if (flags.strategy == MEDIUM)
//             range_sort(&a, &b, &ops);
//         else if (flags.strategy == COMPLEX)
//             radix_sort(&a, &b, &ops);
//     }

//     if (flags.bench)
//         print_bench(compute_disorder(&a), "manual", &ops);

//     free_stack(&a);
//     free_stack(&b);

//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14                                #+#    #+#             */
/*   Updated: 2026/03/14                                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	t_ops	ops;
	t_flags	flags;

	if (argc < 2)
		return (0);
	a.top = NULL;
	a.size = 0;
	b.top = NULL;
	b.size = 0;
	ops = (t_ops){0};
	flags = (t_flags){0};
	parse_flags(argc, argv, &flags);
	parse_input(argc, argv, &a);
	if (!is_sorted(&a))
	{
		if (flags.strategy == ADAPTIVE || flags.strategy == 0)
			adaptive_sort(&a, &b, &ops);
		else if (flags.strategy == SIMPLE)
			insertion_sort(&a, &b, &ops);
		else if (flags.strategy == MEDIUM)
			range_sort(&a, &b, &ops);
		else if (flags.strategy == COMPLEX)
			radix_sort(&a, &b, &ops);
	}
	if (flags.bench)
		print_bench(compute_disorder(&a), "adaptive", &ops);
	free_stack(&a);
	free_stack(&b);
	return (0);
}