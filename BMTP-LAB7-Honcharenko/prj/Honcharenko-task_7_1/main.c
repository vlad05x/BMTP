#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int MaxSentence = 100;
    char sentence[MaxSentence];
    printf("Введіть речення: ");
    fgets(sentence,MaxSentence, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    char *word = "програма";
    for (int i = 0; sentence[i]; i++) {
        sentence[i] = tolower(sentence[i]);
    }

    if (strstr(sentence, word) != NULL) {
        printf ("Слово 'програма' знайдено.\n");
    } else {
        printf ("Слово 'програма' не знайдено.\n");
    }
    return 0;
}

