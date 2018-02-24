#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    int n,m,r;
    //folosim alg lui Euclid
    //cat timp m!-0
    ifstream f("cmmdc.in");
    ofstream g("cmmdc.out");
    f>>n>>m;
    f.close();
    while(m)
    {
        r=n%m;
        n=m;
        m=r;
    }
    if(n!=1)
        g<<n;
    else
        g<<0;
    g.close();
    return 0;
}
