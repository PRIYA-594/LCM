#include <stdio.h>
int res(int a, int b);
int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    if(a>b)
    {
    	 c=res(b,a);
	}
    else
    {
    	c=res(a,b);
	}
    printf("LCM of %d and %d = %d",a,b,c);
    return 0;
}
int res(int r, int p)
{
    static int t= 0;
    t+=p;
    if((t%r==0) && (t%p==0))
    {
        return t;
    }
    else 
    {
        return res(r, p);
    }
}
