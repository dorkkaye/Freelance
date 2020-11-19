#include <stdio.h>

int bitwiseXOR(char bitwise1[], char bitwise2[], char xor[])
{
    int k = 0;

    for(int i = 0; i < 8; i++)
    {
        if(bitwise1[i] == bitwise2[i])
           xor[k] = 0;
        else
            xor[k] = 1;
        k++;
    }

    for(int i = 0; i < 8; i++)
        return xor[i];
}

int main()
{
    char bitwise1[8], bitwise2[8], xor[8];

    printf("Enter bitwise1 in binary: ");
    gets(bitwise1);
    printf("Enter bitwise2 in binary: ");
    gets(bitwise2);

    bitwiseXOR(bitwise1, bitwise2, xor);    //Calculator

    for(int i = 0; i < 8; i++)
        printf("%d", xor[i]);

    return 0;
}