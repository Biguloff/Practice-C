#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	int num_states;

	//argc out 
	for(i=1;i<argc;i++)
	{
		printf("for arg %d: %s\n",i, argv[i]);
	}
  	
  	i = 0;
	char *states[] = {'o'} ;

	while(i<=argc)
	{
		printf("While arg %d: %s\n",i, argv[i]);
		states[i] = argv[i];
		i++;
	}


	for(i=0;i<num_states;i++)
	{
		printf("state %d: %s\n",i,states[i]);
	}

	return 0;
}