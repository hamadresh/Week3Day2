#include<stdio.h>

int main() {
	int i;
	int num_people;
	int num_people_arr[10];
	int num_cities;
	int average;
	int sum = 0;
	/*highest possible min and lowest max */
	int max=0;
	unsigned int min= 0xFFFFFFFF;

	printf("please insert number of cities ");
	scanf(" %d", &num_cities);

	if (num_cities >10)
	{
		printf("too many cities\n");
		return 0;
	}
	
	
	/* number of people in each city put in an array */
	for( i=1; i<= num_cities; i++)
	{
		printf("please insert the number of people in city %d \n", i);
		scanf("%d", &num_people);
		num_people_arr[i-1]= num_people;
	}
	

	/* find sum for getting average */
	for(i=0; i< num_cities; i++)
	{
		sum = sum + num_people_arr[i];
	}
	average = sum/num_cities;
	printf("the average is %d \n", average);



	/* find the maximum and minimum */
	for(i=0; i< num_cities; i++)
        {
                if(max < num_people_arr[i])
	{
			max = num_people_arr[i];
		}
		if(min > num_people_arr[i])
		{
			min = num_people_arr[i];
		}
        }
	printf("maximum and minimum number of people in the provided cities are %d and %d respectively\n", max,min);

	/* print population in reverse order */
	
	for(i=num_cities; i>= 1; i--)
        {
		printf("number of people in city %d is %d \n",i, num_people_arr[i-1]);
        }

}

