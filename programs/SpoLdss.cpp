 #include <stdio.h>
long long int gcd(long long int a, long long int b)
{
    // Everything divides 0
    if (a == 0 || b == 0)
       return 0;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(void) {
    // your code here
    long long int t,g,a,b,c,u=0;
    scanf("%lld",&t);
    while(t--)
    {
        u++;
        scanf("%lld%lld%lld",&a,&b,&c);
        g=gcd(a,b);
      
        if(c%g == 0)
            printf("Case %lld: Yes\n",u);
        else
            printf("Case %lld: No\n",u);
    }
    return 0;
}
