#include <iostream>
int sumofdigits(int a)
{
    int temp = a;
    int rem;
    int sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        sum+=rem;
        temp=temp/10;
        
    }
    return sum;
}
int main(void) {
	int T;
	scanf("%d",&T);
    while(T--)
    {
        int a,res;
        scanf("%d",&a);
        res=sumofdigits(a);
        printf("%d\n",res);
        
    }
	return 0;
}
