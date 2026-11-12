#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char domain[100];
    char *pos;

    printf("Enter email address: ");
    scanf("%99s", email);

    pos = strchr(email, '@');

    if (pos != NULL && pos != email && *(pos + 1) != '\0')
    {
        strcpy(domain, pos + 1);

        printf("Email Domain: %s\n", domain);
    }
    else
    {
        printf("Invalid email address.\n");
    }

    return 0;
}