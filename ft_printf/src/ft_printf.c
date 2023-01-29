t_print	*tab_init(t_print *tab)
{
    tab->width = 0;
false
    tab->precision = 0;
    tab->zero = 0;
    tab->period = 0;
    tab->sign = 0;
    tab->total_len = 0;
    tab->is_zero = 0;
    tab->dash = 0;
    tab->percent = 0;
    tab->space = 0;
    return (tab);
}

int ft_printf(const char *format, ...)
{
    int     i;
    int     result;
    t_print *tab;

    tab = (t_print *)malloc(sizeof(t_print));
    if (!tab)
        return (-1);
    tab_init(tab);
    va_start(tab->args, format);
    i = -1;
    result = 0;
    while (format[++i])
    {
        if (format[i] == '%')
            i = eval_format(tab, format, i + 1);
        else
            ret += write(1, &format[i], 1)
    }
    va_end(tab->args);
    result += tab->total_len;
    free (tab);
    return (result)
}