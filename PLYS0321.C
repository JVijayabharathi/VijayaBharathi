#include<stdio.h>
int main()
{
    int x_axis[3],y_axis[3],i,j,flag=1,temp=1;
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&x_axis[i],&y_axis[i]);
    }
    for(i=0;i<3;i++)
    {
      for(j=i+1;j<3;j++)
      {
          if(x_axis[i]==x_axis[j])
          {
              flag++;
          }
      }
    }
    for(i=0;i<3;i++)
    {
      for(j=i+1;j<3;j++)
      {
          if(y_axis[i]==y_axis[j])
          {
              temp++;
          }
      }
    }
    if(flag==3 || temp==3)
        {
            printf("yes");
        }
    else
        {
            printf("no");
        }
    
   
    return 0;
}
