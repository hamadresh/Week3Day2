#include<stdio.h>

int main(){
	int j;
	int i;
        int x=4;
        int y=4;
        int x_treasure=rand() % 10;
        int y_tresure=rand() % 10;
        char movement;

        for(j=0;j<=9;j++)
	{
		for(i=0; i<= 9; i++)
		{
			x=j;
			y=i;
			printf("the program is at (%d : %d ) \n", x , y);
			if (x >= 10 || x <= -1 || y>=10 || y<=-1)
			{
                	        printf("You hit a wall\n");
    	                    	break;
        	        }
			if (x == x_treasure && y == y_tresure)
               		{
                        printf("Hurrah!, I have found the hidden treasure\n");
                        return 0;
               		}
		}
        }
}
               
