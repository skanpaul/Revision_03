

#include "ft_printf.h"

int ft_printf(const char *text, ...)
{
    int i;
    va_list ptr_va;
    int cnt_print;

    va_start(ptr_va, text);

    cnt_print = 0;
    i = 0;
    while(text[i] != '\0')
    {
        if (isvariadic(text[i]))
        {
            cnt_print += print_variadic(text[i + 1], ptr_va);
            i += 2
        }
        else
        {
            write(1, &text[i], 1);
            i++;
        }
    }
    return (cnt_print); 
}

bool isvariadic (char *seg)
{
return( (seg[0] == '%') && 
        ( (seg[1] == 'd' ) || (seg[1] == 's')||(seg[1] == 'x' )));
}

int print_variadic(char type, va_list ptr_va)
{
    int cnt_print;

    if(type == 'd')

    else if (type == 's')
    
    else if (type == 'x')


}



