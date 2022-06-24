#include "string_format.h"

int wordcount(char *word)
{
    int i, j;
    i = j = 0;

    for(; word[i] != '\0';i++)
    {
        if(word[i] == ' ')
        {
            j++;
            i++;
            if (word[i - 2] == ' ')
            {
                j--;
            }
        }
    }
    j++;
    return (j);
}

int main()
{
    /*char *name = "  saggio gabriello";*/
    int value;
    value = wordcount("saggio  ggggggg             gabriello is    a       guy");

    printf("number of words: %d\n", value);

}