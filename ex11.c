#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	while (i<argc) 
	{
		printf("arg %d : %s\n",i, argv[i]);
		i++;
	}

	i=0; int j =0;
	int min;
	int minnum;

	while (argv[i]!='\0')
	{
		if ((argv[i][0]>'0')&&(argv[i][0]<'9'))
		{
			printf("%s ",argv[i]);

			while((argv[i][j]==1)||
				(argv[i][j]==2))
			{
				printf("llsl\n");
			}
		}
		i++;
	}
	int mas[char el[]];
	printf("\n");
	return 0;
}