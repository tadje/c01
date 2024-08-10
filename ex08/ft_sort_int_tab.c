void    ft_sort_int_tab(int * tab, int size)
{
    int *temp;
    int i;

    i = 0;
    temp = &tab[0];
    if(size == 1)
    {
        break;
    }
    
    while(i < size)
    {
        i++;
        if(*temp < tab[i])
        {
            temp = &tab[i]
        }
    }
    ft_swap(temp,*tab[0]);
    ft_sort_int_tab(tab[1:], size -1)
}

