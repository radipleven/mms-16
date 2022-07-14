#include <stdio.h>

int main()
{

    int type;
    scanf ("%d", &type);
    int number;

    switch (type)
    {
    case 1: scanf ("%d", &number);printf("%x", number);break;
    case 2: scanf ("%d", &number);printf("%o", number);break;
    case 3: scanf ("%x", &number);printf("%d", number);break;
    case 4: scanf ("%x", &number);printf("%o", number);break;
    case 5: scanf ("%o", &number);printf("%d", number);break;
    case 6: scanf ("%o", &number);printf("%x", number);break;
    }

    return 0;
}