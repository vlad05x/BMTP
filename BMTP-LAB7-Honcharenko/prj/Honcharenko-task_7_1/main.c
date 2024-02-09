#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    system("chcp 1251 & cls");

    int MaxSentence = 100;
    char sentence[MaxSentence];
    char *word = "програма";
    char choice;

    do {
        printf("Введіть речення (для закінчення введіть: \",\" \".\" \"!\" \"?\"): ");
        fflush(stdin);
        fgets(sentence, MaxSentence, stdin);
        sentence[strcspn(sentence, ",.?!")] = '\0';

        for (int i = 0; sentence[i]; i++) {
            sentence[i] = tolower(sentence[i]);
        }

        if (strstr(sentence, word) != NULL) {
            printf("Слово 'програма' знайдено.\n");
        } else {
            printf("Слово 'програма' не знайдено.\n");
        }

        printf("Бажаєте ввести ще речення? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
