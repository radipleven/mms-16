#include<stdio.h>

int main()
{
	int i=0, n=10;
	char str[50];
	FILE *fptr = fopen("test.txt", "w");
	if (fptr == NULL)
	{
		printf("Could not open file");
		return 0;
	}

	while (i<n)
    {
        
		puts("Enter a name");
		scanf("%[^\n]%*c", str);
		fprintf(fptr,"%d. %s\n", i, str);
        i++;
    }
    
	
	fclose(fptr);

	return 0;
}