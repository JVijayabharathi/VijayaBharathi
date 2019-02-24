int main()
{
    int n,k,num[100],i,t;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<k;i++)
    {
        t=num[i];
        num[i]=num[i+1];
        num[i+1]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",num[i]);
    }
    return 0;
}
