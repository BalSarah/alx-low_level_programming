#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
        int Danica, Lil_david = 0;
        unsigned long int now;

        for (Danica = 63; Danica >= 0; Danica--)
        {
                now = n >> Danica;
                if (now & 1)
                {
                        _putchar('1');
                        Lil_david++;
                }
                else if (now)
                        _putchar('0');
        }
        if (!now)
                _putchar('0');
}
