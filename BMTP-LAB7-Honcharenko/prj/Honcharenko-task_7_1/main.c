#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int MaxSentence = 100;
    char sentence[MaxSentence];
    printf("������ �������: ");
    fgets(sentence,MaxSentence, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    char *word = "��������";
    for (int i = 0; sentence[i]; i++) {
        sentence[i] = tolower(sentence[i]);
    }

    if (strstr(sentence, word) != NULL) {
        printf ("����� '��������' ��������.\n");
    } else {
        printf ("����� '��������' �� ��������.\n");
    }
    return 0;
}

