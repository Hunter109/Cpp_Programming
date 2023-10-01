#include <stdio.h>
// int main()
// {
//     int p, q, r, s;
//     printf("Enter the size of 1st matrix\n");
//     scanf("%d %d", &p, &q);
//     printf("Enter the size of 2nd matrix\n");
//     scanf("%d %d", &r, &s);
//         int mat1[p][q], mat2[r][s], mat3[p][s];
//         int  i, j, k,sum = 0;
//     if (q == r)
//     {
//         printf("Enter the 1st matrix\n");
//         for (i = 0; i < p; i++)
//         {
//             for (j = 0; j < q; j++)
//             {
//                 scanf("%d", &mat1[i][j]);
//             }
//         }
//         printf("Enter the 2nd matrix\n");
//         for (i = 0; i < r; i++)
//         {
//             for (j = 0; j < s; j++)
//             {
//                 scanf("%d", &mat2[i][j]);
//             }
//         }

//         for (i = 0; i < p; i++)
//         {
                
//             for (j = 0; i < s; j++)
//             {
//                 for (k = 0; k < r; k++)
//                 {
//                     sum = (mat1[i][k] * mat2[k][j]);
//                 }
//                 mat3[i][j] = sum;
//                 sum = 0;
//             }
//         }
//         printf("The multiply is:\n");

//         for (i = 0; i < p; i++)
//         {
//             for (j = 0; j < s; j++)
//             {
//                 printf("%d", mat3[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("please enter the valid matrix");
//     }
//     return 0;
// }