#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    system("chcp 1251 & cls");

    int MaxSentence = 100;
    char sentence[MaxSentence];
    char *word = "��������";
    char choice;

    do {
        printf("������ ������� (��� ��������� ������: \",\" \".\" \"!\" \"?\"): ");
        fflush(stdin);
        fgets(sentence, MaxSentence, stdin);
        sentence[strcspn(sentence, ",.?!")] = '\0';

        for (int i = 0; sentence[i]; i++) {
            sentence[i] = tolower(sentence[i]);
        }

        if (strstr(sentence, word) != NULL) {
            printf("����� '��������' ��������.\n");
        } else {
            printf("����� '��������' �� ��������.\n");
        }

        printf("������ ������ �� �������? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
