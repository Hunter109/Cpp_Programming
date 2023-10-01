
#include <stdio.h>

int main()
{
     int p, q, r, s;
    printf("Enter the size of 1st matrix\n");
    scanf("%d" ,&p);
    scanf("%d" ,&q);
    printf("Enter the size of 2nd matrix\n");
    scanf("%d ", &r);
    scanf("%d",&s);
    int mat1[p][q], mat2[r][s], mat3[p][s];
    int sum = 0;
       if (q == r){
    printf("Enter the first matrix\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
           
            scanf("%d", &mat1[i][j]);
           
        }
        
    }
    printf("Enter the second matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            
            scanf("%d", &mat2[i][j]);
          
        }
 
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < s; j++)
        {
           
            for (int k = 0; k < q; k++)
            {
                sum =  mat1[i][k] * mat2[k][j];
            }
            mat3[i][j] = sum;
            sum = 0;
        }
    }

  
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < s; j++)
        {
           
            printf("%d \t", mat3[i][j]);
        }
        printf("\n");
    }
       }
 
    else
    {
        printf("please enter the valid matrix");
    }


       
    return 0;
}
