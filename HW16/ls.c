#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>

void list(const char *dir,int op_a,int op_l)
{
	
	struct dirent *d;
	DIR *direct = opendir(dir);
	if (!direct)
	{
		if (errno = ENOENT)
		{
			perror("Nonexistent directory.");
		}
		else
		{
			perror("Unreadable directory");
		}
		exit(EXIT_FAILURE);
	}

	while ((d = readdir(direct)) != NULL)
	{
		//If hidden files are found we continue
		if (!op_a && d->d_name[0] == '.')
			continue;
		printf("%s  ", d->d_name);
		if(op_l) printf("\n");
	}
	if(!op_l)
	printf("\n");
}
int main(int argc, const char *argv[])
{
	if (argc == 1)
	{
		list(".",0,0);
	}
	else if (argc == 2)
	{
		if (argv[1][0] == '-')
		{
			int a = 0, l = 0;
			char *p = (char*)(argv[1] + 1);
			while(*p){
				if(*p == 'a') a = 1;
				else if(*p == 'l') l = 1;
				else{
					perror("Unavailable option.");
					exit(EXIT_FAILURE);
				}
				p++;
			}
			list(".",a,l);
		}
	}
	return 0;
}