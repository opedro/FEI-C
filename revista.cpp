#include <cstdlib>
#include <iostream>
#include<iomanip>
using namespace std;

int main(int argc, char *argv[])
{
      float n1, n2, n3, nf;
    cin>>n1>>n2>>n3;
    if (n2<n1 && n2<n3)
    {
       nf=(((n2*2)+(n1*5))+(n3*5))/12;
    }
    if (n1<n2 && n1<n3)
    {
       nf=(((n1*2)+(n2*5))+(n3*5))/12;
    }
    if (n3<n1 && n3<n2)
    {
       nf=(((n3*2)+(n2*5))+(n1*5))/12;
    }
    cout<<fixed<<setprecision(2)<<nf;
    system("PAUSE");
    return EXIT_SUCCESS;
}
