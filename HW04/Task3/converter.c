#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char numToChar(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
int charToNum(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else if (c>='A' && c<='Z')
    {
        return (int)c - 'A' + 10;
    }
    else printf("Invalid number - only uppercase letters are allowed. \n");
}

void revChar(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
int baseNtoBase10(int n, char* number)
{
    int result =0;
    int length = strlen(number);
    int pow = 1;
    for (int i = length-1; i >=0; i--)
    {
        if (charToNum(number[i])>=n)
        {
            printf("invalid input\n");
            return -1;
        }
        result += charToNum(number[i])* pow;
        pow*=n;
    }

    return result;
    
}
char* base10tobaseN(long number, int base)
{
        char* result;
        int index = 0;  
    while (number > 0)
    {
        result[index++] = numToChar(number % base);
        number /= base;
    }
    result[index] = '\0';
 
    
    revChar(result);
    return result;
        
        
}
int main()
{
    int base1;
    int base2;
    printf("Enter start base: ");
    scanf("%d", &base1);
    char* number;

    printf("Enter start number: ");
    scanf("%s", number);
    printf("Number: %s\n", number);
    printf("Number %s in base 10: ", number); 
    printf("%d \n",baseNtoBase10(base1,number) );
    
    printf("Enter exit base: ");
    scanf("%d", &base2);
    printf("Number %s in base %d: ", number,base2); 
    printf("%s \n",base10tobaseN(strtol(number,NULL,10),base2) );
    return 0;
}