#include <stdio.h>

int main()
{
   int n,mat[100][100],i,j,i_count=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
         scanf("%d",&mat[i][j]);
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if((i==0 && j==0) || (i==n-1 && j==n-1) || (i==0 && j==n-1) || (i==n-1 && j==0))
           {
               if(mat[i][j]==1)
                  i_count++;
           }
           else if(mat[i][j-1]==0 && mat[i][j+1]==0 && mat[i-1][j]==0 && mat[i+1][j]==0)
           {
               if(mat[i][j]==1)
                  i_count++;
           }
       }
   }
   printf("%d",i_count);
   
   return 0;
}
