#include  "conversion.h" 
/**
 * exponent - raises the number given as the first parameter to the power given as the second parameter
 * @number: the number to be raised
 * @power: the power is which the number is raised to
 * Return - returns the integer value of the exponent
 */

int exponent(int number, int power)
{
    int i;
    int value, duplicate;

    value = number;
    duplicate = number;

    if (power == 0)
    {
        value = 1;
    }

    else
    {
        for(i = 1; i < power ; i++)
        {
            value *= duplicate;
        }
    }
    return (value);
}


/**
 * hex_to_int - converts a hexadecimal value to an integer value
 * @str: the hexadecimal to be converted
 * Return - returns the integer value of the converted hexadecimal
 */
int hex_to_int(char *str)
{
    int i, j, value;

    i = value = 0;
    int exp;

    while (str[i] != '\0')
    {
        i++;
    }

    i--;
    int n;
    n = 0;

    if(str[n] == '0')
    {
        n++, i--;
        if(str[n] == 'x' || str[n] == 'X')
            n++, i--;
    }    

    for (j = n; str[j] != '\0'; j++)
    {
        
        if (str[j] >= '0' && str[j] <= '9')
        {
             
            value += ((str[j] - '0') * exponent(16, i));
            i--;
        }
        else if (str[j] >= 'a' && str[j] <= 'f' )
        {
            value += (((str[j] -'a') + 10) * exponent(16, i));
            i--;
        }
        else if(str[j] >= 'A' && str[j] <= 'F')
        {
            value += (((str[j] - 'A') + 10) * exponent(16, i));
            i--;
        }
    }
    return (value);
}

/**
 * expand - expand the first from the first character found in s1 to the second character found in s1
 * excluding the '-' sign and then copies the expanded characters to the s2.
 * s2 must be dynamically allocated the number of characters to be stored,
 * else it generates error
 * @s1: the string range passed as argument. Eg: a-z
 * Return - nil
 */
char expand(char s1[], char *s2)
{
    int i, j;
    char start, stop, temp;

    for (i = 0; s1[i] != '\0'; i++)
    {
        if ((s1[i] >= '0' && s1[i] <= '9') || (s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'A'))
        {
            start = s1[i];
            i = i + 2;
            stop = s1[i];
            j = 0;
            s2[j] = start;

            while(s2[j] != stop)
            {
                temp = s2[j];
                j++;
                s2[j] = temp + 1;
            }
        }

        else
        {
            i++;
            j++;
        }
    }
}
int main()
{
    char range[2];
    expand("a-c", range);
    printf("value: %s\n", range);
}