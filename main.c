#include <stdio.h>
#include <stdlib.h>

int qcheck(int arr[], int N)
{
    int posx1[N*N],posx2[N*N],posy1[N*N],posy2[N*N];
    int i=0,j,errcount=0;
    for (i=0;i<N-1;++i)
    {
        for (j=i+1;j<N;j++)
        {
            if(arr[i]==arr[j] || abs(arr[i]-arr[j])==abs(i-j))
            {
                posx1[errcount]=i+1;
                posx2[errcount]=j+1;
                posy1[errcount]=arr[i];
                posy2[errcount]=arr[j];
                errcount++;
            }
        }
    }
    if (errcount==0)
    {
        printf("TRUE");
    }
    if (errcount==1)
    {
        printf("FALSE, two queens intercept each other: (%d,%d) and (%d,%d)",posx1[0],posy1[0],posx2[0],posy2[0]);
    }
    if (errcount>1)
    {
        printf("FALSE, there are %d number of interceptions \n",errcount);
        for (i=0;i<errcount;++i)
        {
            printf("(%d,%d)-(%d,%d) \n",posx1[i],posy1[i],posx2[i],posy2[i]);
        }
    }
}

int main()
{
    int N, i=0;
    printf("Enter number of queens \n");
    scanf("%d",&N);
    if (N==1 || N==2)
    {
        printf("NO");
        return 0;
    }
    int arr[N-1];
    printf("Write the row of each queen \n");
    while (i<N && scanf("%d",&arr[i])==1)
    {
        i++;
    }
    qcheck(arr,N);
    return 0;
}
