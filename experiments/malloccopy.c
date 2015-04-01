#include <stdio.h>
#include <stdlib.h>

char* copy(char* array, int nbytes);

main()
{
    char word[10] = "some word";
    char* word_copy = copy(word, 10);

    printf("Array copied: \"%s\"\n", word_copy);

    free(word_copy);
}

char* copy(char* array, int nbytes)
{
    int i;
    char* new_array = (char *)malloc(nbytes);
    for(i = 0; i < nbytes; i++)
        new_array[i] = array[i];

    return new_array;
}
