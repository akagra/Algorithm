#include<bits/stdc++.h>
using namespace std;

void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    fastscan(a);
    for(b=0;b<a;b++)
    {
        fastscan(c);
        int arr[c+1];
        for(d=0;d<c;d++)
            fastscan(arr[d]);
        bool ar[11],flag=0;
        memset(ar,false,sizeof(ar));
        for(d=0;d<c;d++)
        {
            ar[arr[d]] = true;
        }
        for(d=1;d<c;d++)
        {
            if(ar[8]== true || ar[9]==true || ar[10]==true)
                flag=1;
             if(ar[1]== false ||ar[2]== false ||ar[3]== false ||ar[4]== false ||ar[5]== false ||ar[6]== false ||ar[7]== false)
            flag=1;
        }
       // cout<<flag<<"\n";
        g=0;h=c-1;
        while(1)
        {
            if(arr[g]!=arr[h])flag=1;

            g++;h--;
            if(g>h)break;
        }
        if(flag==1)
            printf("no\n");
        else
            printf("yes\n");
    }
}
