#include <stdio.h>

int main(int argc, char const *argv[])
{
	char full_name[] = {'Z','e','d',' ','A','.',' ','S','h','a','w'};


	int areas[] = {10,12,13,14,20};
	char name[] = "Zed";

	areas[0] = 100;
	areas[5] = 123;
	areas[6] = 32;
	printf("The size of an int : %ld\n",
		sizeof(int));
	printf("Size of areas (int[]): %ld\n", 
		sizeof(areas));
	printf("The number of ints in areas: %ld\n",
		sizeof(areas) / sizeof(int));
	printf("The first area %d, the seventh %d\n",
		areas[0],areas[6] );	

	int i;
	for (i=0;i<8;printf("%d,   ",areas[i++])) ; 
	printf("The size of char: %ld\n",sizeof(char) );
	printf("The size of name(char[]): %ld\n",
		sizeof(name));
	printf("The number of chars : %ld\n",
		sizeof(name)/sizeof(char));

	printf("The sizeof full_name is :%ld\n",
		sizeof(full_name));		
	printf("THe number of chars : %ld\n", 
		sizeof(full_name)/sizeof(char));

	name[2] = 'Z';
	full_name[0] = 'S';


	printf("name =\"%s\" full name = \"%s\" \n",
	 name,full_name);

	return 0;
}
