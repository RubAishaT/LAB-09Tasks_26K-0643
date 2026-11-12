#include <stdio.h>
#include <string.h>

int main()
{
    char feedback[500], updated[600];
    char *pos;

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    feedback[strcspn(feedback, "\n")] = '\0';

    printf("\nTotal characters: %d\n", (int)strlen(feedback));

    if (strstr(feedback, "bad") != NULL)
    {
        printf("The word bad exists.\n");
    }

    if (strstr(feedback, "good") != NULL)
    {
        printf("The word good exists.\n");
    }

    pos = strstr(feedback, "bad");

    if (pos != NULL)
    {
        strncpy(updated, feedback, pos - feedback);
        updated[pos - feedback] = '\0';

        strcat(updated, "not good");
        strcat(updated, pos + 3);

        strcpy(feedback, updated);

        printf("Updated feedback: %s\n", feedback);
    }
    else
    {
        printf("No replacement needed.\n");
    }

    return 0;
}