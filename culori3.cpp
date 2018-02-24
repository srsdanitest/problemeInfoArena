#include <iostream>
#include<fstream>
using namespace std;
int len;
void magic(char *v)
{
    int i=0,r=0;
    for(;i<len;)
    {
        r=r+v[i]*3;
        v[i++]=r%10;
        r/=10;
    }
    while(r)
    {
        v[len++]=r%10;
        r/=10;
    }
}
int main()
{
    ifstream f("culori3.in");
    ofstream g("culori3.out");
    int n,i;
    f>>n;
    char *v=new char[n/3];
    if(n==1)
        g<<5;
    else
    {
        (n%2)?(v[0]=4,v[1]=1,len+=2):(v[0]=8,len++);
        n/=2;
        for(i=0; i<n-1; i++)
            magic(v);
        while(len)
            g<<(int)v[--len];
    }
    delete v;
    f.close();
    g.close();
    return 0;
}
