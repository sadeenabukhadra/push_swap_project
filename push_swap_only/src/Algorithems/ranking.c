#include "../../push_swap.h"

void index_stack(t_stack *a)
{
   t_node *tmp1;
   t_node *tmp2;
   int rank;

   tmp1=a->top;
   while (tmp1)
   {
        rank=0;
        tmp2=a->top;
        while (tmp2)
        {
            if(tmp2->value < tmp1->value)
            {
                rank++;
            }
            tmp2=tmp2->next;
        }
        tmp1->index=rank;
        tmp2->index=tmp1->next;
   }
   
}