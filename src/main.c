/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:58:28 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/14 15:58:36 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../push_swap.h"

// // ===== INIT STACK FROM ARGS =====
// int init_stack_from_args(t_stack *a, int argc, char **argv)
// {
//     int i;
//     int value;

//     for (i = 1; i < argc; i++)
//     {
//         value = ft_atoi(argv[i]);
//         if (!is_valid_number(argv[i])||!ft_atol)
//         {
//             write(2, "Error\n", 6);
//             return (0);
//         }
//     }
//     return (1);
// }

// // ===== MAIN =====
// int main(int argc, char **argv)
// {
//     t_stack a;
//     t_stack b;
//     t_ops ops;

//     if (argc < 2)
//         return (0);

//     init_stack(&a, NULL, 0);
//     init_stack(&b, NULL, 0);
//     //init_ops(&ops);

//     if (!init_stack_from_args(&a, argc, argv))
//         return (1);

//     adaptive_sort(&a, &b, &ops);

//     free_all_stacks(&a, &b);
//     return (0);
// }
