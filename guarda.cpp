/*Pedro Aparecido Ruiz da Silva 221130354*/
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int verificaFuga(double D, double Vf, double Vg)
{
    double c, h;
    h=  12/Vf;
    c= sqrt((144 +(D*D)))/Vg;;
    if (h >=c)
       return 1;
    else
        return 0;
}

int main(int argc, char *argv[])
{
    double qteste, D, Vf, Vg, res;
    cin >> qteste;
    while (qteste!= 0)
    {
        for(int i=0; i<qteste; i++)
        {
                cin >> D >> Vf >> Vg; 
                res = verificaFuga(D, Vf, Vg);
                if (res==1)
                {
                   cout << "S" <<endl;
                }
                else
                {
                    cout << "N" <<endl;
                }
        }
        cin >> qteste;
    }
    return EXIT_SUCCESS;
}
