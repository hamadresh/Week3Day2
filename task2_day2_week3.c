#include <stdio.h>

void main() {
	int m; /*minutes m and seconds s */
	int s;
	int num_min;

	printf("insert the number of minutes: ");
	scanf("%d", &num_min);

	for(m=0; m<num_min; m++)
	{
		for(s=0;s<=59;s++)
		{
			printf("%d %d : %d %d \n", m/10 % 10, m % 10, s/10 % 10, s % 10);
		}
	
	}
}
