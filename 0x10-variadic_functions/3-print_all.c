#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char c;
    float f;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;

            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;

            case 'f':
                f = va_arg(args, double); // float arguments are promoted to double in va_arg
                printf("%f", f);
                break;

            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;

            default:
                break;
        }

        if ((format[i + 1]) && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
            printf(", ");

        i++;
    }

    va_end(args);
    printf("\n");
}
