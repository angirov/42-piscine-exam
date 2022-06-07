#include "ft_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *list0;
    int tmp;
    int flag = 0;

    list0 = lst;
    while (list0->next)
    {
        if (!(*cmp)(list0->data, list0->next->data))
        {
            tmp = *(int *)(list0->data);
            *(int *)(list0->data) = *(int *)(list0->next->data);
            *(int *)(list0->next->data) = tmp;
            flag = 1;
        }
        if (flag)
            list0 = lst;
        else
            list0 = list0->next;
    }
    return lst;
}