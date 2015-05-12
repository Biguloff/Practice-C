#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i =0;

	if (argc == 2)
	{
		printf("You should only have one argument. You suck\n");
	}
	if (argc>1 || argc<=4)
	{
		printf("Here's your arguments: \n");

		for (i=0;++i<argc;)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	 printf("You have too many arguments, sucker\n");

	return 0;
}