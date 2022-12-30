#include<stdio.h>

int main()
{

    printf("Compile time initialisation of a 3 dimension array\n");
    printf("Pragyaratan 2K20/B5/58\n");
    int array_3d[2][3][3] ={{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{13,14,15},{16,17,18}}};
    int i =0;
    int j =0;
    int k =0;
    while(i!=2)
    {  
       printf("\n");
          
         while(j!=3)
         {
            printf("\n");
              
             while(k!=3)
             {               
                printf("%d\t",array_3d[i][j][k]);
                k++;
             }
            
             k=0;
             j++;
          }
            
       j=0;      
       i++;
     }   
     return 0;
   }