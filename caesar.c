//program to convert text to a CIPHER text

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Checks if the second word is only digits
    if (argc == 2 && isdigit(*argv[1]))
    {
        //check input for integers
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        // converts string to integer
        int i = atoi(argv[1]);

        // checks if that integer value is negative or zero
        if (i <= 0)
        {
            printf("Usage: ./caesar key\n");
            return 0;
        }
        else
        {
            // prompt user to get text as plaintext
            string plaintext = get_string("plaintext: ");

            int n = strlen(plaintext);
            char ciphertext[n];

            // turn plaintext into ciphertext
            printf("ciphertext: ");
            for (int j = 0; j < n; j++)
            {
                ciphertext[j] = rotate(plaintext[j], i);
                printf("%c", ciphertext[j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}


// shifts characters by the amount of the integer
char rotate(char c, int n)
{
    char cipher;

    if (islower(c))
    {
        cipher = (((c + n) - 97) % 26) + 97;
    }
    else if (isupper(c))
    {
        cipher = (((c + n) - 65) % 26) + 65;
    }
    else
    {
        cipher = c;
    }

    return cipher;
}
