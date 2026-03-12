#include "../../push_swap.h"
double compute_disorder(int *arr, int size)
{
    int i;
    int j;
    int mistakes;
    int total_pair;
    i=0;
    mistakes=0;
    total_pair=0;
    while(i<size)
    {
        j=i+1;
        while (j<size)
        {
            total_pair++;
            if(arr[i]>arr[j])
                mistakes++;
            j++;
        }
        i++;      
    }
    if(total_pair==0)
        return(0) ;
    return((double)mistakes/total_pair);                                                                                                                                                                            
}
int get_total_ops(t_ops *ops)
{
    return(
        ops->sa+ops->sb+ops->ss+
        ops->pa+ops->pb+
        ops->ra+ops->rb+ops->rr+                                                                         
        ops->rra+ops->rrb+ops->rrr);
}
static void print_line(char *name,int value)
{
    write(2,name,ft_strlen(name));
    ft_putnbr_fd(value,2);
    write(2,"\n",1);
}
static void print_operations(t_ops *ops)
{
    print_line("sa:",ops->sa);
    print_line("sb",ops->sb);
    print_line("ss:",ops->ss);
    print_line("pb:",ops->pb);
    print_line("pa:",ops->pa);
    print_line("ra:",ops->ra);
    print_line("rb:",ops->rb);
    print_line("rr:",ops->rr);
    print_line("rra:",ops->rra);
    print_line("rrb:", ops->rrb);
    print_line("rrr:",ops->rrr);
}

void	print_bench(double disorder, char *strategy, t_ops *ops)
{
	int	total;

	total = get_total_ops(ops);
	write(2, "Disorder: ", 10);
	ft_putnbr_fd((int)(disorder * 100), 2);
	write(2, "\n", 2);
	write(2, "Strategy: ", 10);
	write(2, strategy, ft_strlen(strategy));
	write(2, "\n", 1);
	write(2, "Total operations: ", 18);
	ft_putnbr_fd(total, 2);
	write(2, "\n\n", 2);
	print_operations(ops);
}