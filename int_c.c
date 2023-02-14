#include<stdio.h>

int main()
{
	char ii[4];
	int tmp = 1212112321;

	for(int i=0; i<4; i++)
	{
		ii[i] = (char)tmp;
		tmp = tmp>>8;
	}

	printf("%s\n", ii);
	return 0;
}
