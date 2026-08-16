/*Pedro Aparecido Ruiz da Silva 22113035-4
prof. Monael ex. Algaritmos turma 701*/
#include <cstdlib>
#include <iostream>

using namespace std;
int i, al, alga;
string num;

int alg(string num)
{
   al=num.size();
   return al;
}

int main(int argc, char *argv[])
{
    cin >> i;
    while (i!=0)
    {
          cin >> num;
          alga = alg(num);
          cout << alga << endl;
          i--;
    }
    return EXIT_SUCCESS;
}
