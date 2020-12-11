#include <stdio.h>
#include <math.h>
int count=0, temp=0;
int n1=0, n2=0;
int d=0;

int main()
{
    int n;

    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        count=0;
        temp=0;
        scanf("%d %d", &n1, &n2);
        d=n2-n1;
        int sqrtd = (int)sqrt(d);
        
        if(sqrtd*sqrtd==d)
        {
            count=sqrtd*2-1;
        }
        else if(sqrtd*(sqrtd+1)<d)
        {
            count=sqrtd*2+1;
        }
        else if(sqrtd*(sqrtd+1)/2>=d/2)
        {
           count=sqrtd*2;
        }
        printf("%d\n", count);
    }
}
