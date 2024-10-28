#include <stdio.h>

void main () {
        int i=1;
        int j=1;
        int num_ast;/* for the final number of astriscs */

        printf("Insert width of pyramid");
        scanf("%d", &num_ast);

        while(i<= num_ast)
        {
                while(j<=(num_ast+1))
                {
                        if(j<=num_ast-i)
                        {
                                printf(" ");
                                j=j+1;
				continue;
                        }
                        if(j<=num_ast)
                        {
                                printf("*");
                        }
                        else
                        {
                                printf("\n");
                        }
			j=j+1;
			
                }
		i=i+1;
		j=1;
	
        }
}


