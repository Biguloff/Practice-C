#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	//print out
	printf("1 numbers: %d %d %d %d\n",
	numbers[0],numbers[1],
	numbers[2],numbers[3]);

	printf("2name each: %c %c %c %c\n",
	name[0],name[1],name[2],name[3]);

	printf("3name :%s\n",name);

	//numsetup
	int i;
	for (i=0;i<=3;numbers[i]=(i++)+1);
	//namesetup
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = 'O';

	printf("4numbers: %d %d %d %d\n",
	numbers[0],numbers[1],numbers[2],numbers[3]);
	printf("5name each: %c %c %c %c\n",
	name[0],name[1],name[2],name[3]);
	printf("6name :%s\n",name);
	char *namelnk = "Zed";
	printf("7lnk : %s\n", namelnk);

	printf("lnk : %c %c %c %c \n",
		namelnk[0], namelnk[1],namelnk[2],namelnk[3]);
	
	return 0;
}
