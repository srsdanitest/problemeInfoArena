#include <iostream>
#include<fstream>
#include<math.h>
using namespace std;

int main()
{
    ifstream f("chiftea.in");
    ofstream g("chiftea.out");
    int radical,n,i,element;

    f>>n;
    for(i=0; i<n; i++)
    {
        f>>element;
        radical=sqrt(element);
        if(element==0)
            g<<0<<'\n';
        else
        {
            if(radical*radical!=element)
            {
                if(element-radical*radical>radical)
                    g<<4*radical+4;
                else
                    g<<4*radical+2;
            }
            else
                g<<4*radical;
            g<<'\n';
        }
    }
    f.close();
    g.close();
    return 0;
}
