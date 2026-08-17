#include <cstdlib>
#include <iostream>

using namespace std;
int temp(double qbi, double qbl)
{
    int qh=0;
    qbi=qbi*2;
    while(qbi<=qbl)
    {
            qbi*=2;
            ++qh;
    }
    return qh;
}
int main(int argc, char *argv[])
{
    double qbl, qbi;
    int qh, qd;
    cin>>qbi>>qbl;
    qh = temp(qbi, qbl);
    qd = (int)qh/24;
    qh = (int)qh%24;
    cout << qd <<" "<< qh;
    return EXIT_SUCCESS;   
}
