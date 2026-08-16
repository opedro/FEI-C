/*Pedro Aparecido Ruiz da Silva 221130354
Prof. Monael ex. Enfermeira versão:4.9.9.2*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int age, dose;
    float p;
    cin>>age >>p;
    if (age<=13)
    {
       if (p<9.9)
       {
          dose=4;
       }
       else if (p<=19.9)
       {
            dose=8;
       }
       else if (p<=29.9)
       {
            dose=12;
       }
       else if (p<=39.9)
       {
            dose=16;
       }
       else if (p>=40)
       {
            dose=20;
       }
    }
    else
    {
        dose = p/2;
        if (int(dose)==false)
       {
           dose= int(dose)+1;
        }
    }
    cout << dose;
    return EXIT_SUCCESS;
}
