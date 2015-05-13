#include <stdio.h>
#include <ctype.h>


int can_print_it(char ch);
void print_letters(char argv[]);

void print_arguments(int argc,char *argv[])
{
	int i = 0;


	for(i = 0;i<argc;i++)
	{		printf("agv i %c\n",*argv[i] );
			printf("arg %d\n ", i);
		print_letters(argv[i]);	
	}
}

void print_letters(char argv[])
{
	int i = 0;

	for(i=0;argv[i] != '\0'; i++);
	{
		printf("%c\n",argv[i] );
		char ch = argv[i];
				printf("let %d\n ch %c", i, ch);
		if(can_print_it(ch))
		{
						printf("arg %d\n ", i);
			printf("'%c' == %d ",ch,ch);
		}
	}
printf("\n");
}

int can_print_it(char ch)
{	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
	print_arguments(argc,argv);
	return 0;
}

