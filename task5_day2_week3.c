#include <stdio.h>

void main() {

	int i;
	int j;
	
	int red_arr[10][10];
	int green_arr[10][10];
	int blue_arr[10][10];
	int grey_arr[10][10];

	for(i=0; i<10; i++)
	{
		for(j=0;j<10;j++)
		{
			red_arr[i][j]= rand() % 256;
			green_arr[i][j]= rand() % 256;
			blue_arr[i][j]= rand() % 256;
			grey_arr[i][j]= 0.299 * red_arr[i][j] + 0.587 * green_arr[i][j] + 0.114 * blue_arr[i][j];
			printf("Original RGB respectively is %d, %d, %d\n", red_arr[i][j], green_arr[i][j], blue_arr[i][j]);
			printf("Greyscale is %d \n", grey_arr[i][j]);
		}
	}
}
