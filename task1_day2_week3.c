#include <stdio.h>

void main () {
        int i;
        int j;
        int num_ast;/* for the final number of astriscs */
	
	printf("Insert width of pyramid");
	scanf("%d", &num_ast);

	for(i=1; i<= num_ast;i++)
        {
                for(j=1;j<=num_ast+1;j++)
                {
                        if(j<=num_ast-i)
                        {
                                printf(" ");
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
                }
        }
}

