#include<stdio.h>

void main(){
	int x=4;
	int y=4;
	int x_treasure=rand() % 10;
	int y_tresure=rand() % 10;
	char movement;

	while(1)
	{
		printf("please insert the movement ");
	        scanf(" %c", &movement);

		switch (movement)
		{
			case 'u':
				y = y+1;
				break;
			case 'd':
				y=y-1;
				break;
			case 'r':
				x=x+1;
				break;
			case 'l':
				x=x-1;
				break;
		}
		printf("you are now at ( %d , %d )\n", x, y);

		if (x >= 10 || x <= -1 || y>=10 || y<=-1)
		{
			printf("You hit a wall\n");
			break;
		}
		if (x == x_treasure && y == y_tresure)
		{
			printf("Hurrah!, I have found the hidden treasure\n");
			break;
		}
	}
}
