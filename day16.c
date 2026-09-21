#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[1000];
    int length;
    int lowercase = 0;
    int uppercase = 0;
    int digit = 0;
    int special = 0;

    printf("Enter password: ");
    scanf("%s", password);

    length = strlen(password);

    // Condition 5: Minimum length must be 10
    if (length < 10)
    {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < length; i++)
    {
        // Condition 1: At least one lowercase letter anywhere
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            lowercase = 1;
        }

        // Conditions 2, 3 and 4: Check only inside characters
        if (i > 0 && i < length - 1)
        {
            // Uppercase letter
            if (password[i] >= 'A' && password[i] <= 'Z')
            {
                uppercase = 1;
            }

            // Digit
            if (password[i] >= '0' && password[i] <= '9')
            {
                digit = 1;
            }

            // Special character
            if (password[i] == '@' ||
                password[i] == '#' ||
                password[i] == '%' ||
                password[i] == '&' ||
                password[i] == '?')
            {
                special = 1;
            }
        }
    }

    if (lowercase && uppercase && digit && special)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
