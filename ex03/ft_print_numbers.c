#include <unistd.h>

void ft_print_numbers(void)
{
    char c; // Declare c variable as in char
    c = '1'; // Use the character '1' (ASCII 49)
    while ( c <= '9' )  // 9 is also the literal character printing to terminal
    {
        write( 1, &c, 1);
        c++;
    }
    return ;
}
