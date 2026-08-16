#include <cstdlib>
#include <iostream>

using namespace std;

bool bissexto(int ano)
{
     if (ano % 4 == 0)
        if (ano % 100 != 0)
           return 1;
        else 
             if (ano % 400 == 0)
                return 1;
             else
                 return 0;
     else
         return 0;      
}

bool validadata(int dia, int mes, int ano)
{    
     bool bi;
     bi = bissexto(ano);
     if (bi == 0)
     {
        if(mes == 2 && dia >  28)
                return 0;
        } 
        if (mes>12 || dia>31)
        {
           return 0;
        }
        if((mes==4 || mes==6 || mes == 9 || mes==11)&&dia>30)
        {
            return 0;
        }
        else
        {
            return 1;
        }
}

int main(int argc, char *argv[])
{
    bool val;
    int dia, mes, ano, qteste;
    cin >> qteste;
    for (int i=0; i<qteste; i++)
    {
        cin >> dia >> mes >> ano;
        val = validadata(dia, mes, ano);
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
