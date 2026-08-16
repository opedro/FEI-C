/*Pedro Aparecido Ruiz da Silva 111230354
prof Monael ex.invertnum versão:4.9.9.2*/

#include <cstdlib>
#include <iostream>

using namespace std;

int inv(int &n, int nalg)
{
    int j=0;
    while (nalg > 0)
    {
          nalg/=10;
          j++;
    }
    
    int i=0;
    while (n> 0)
	{
          i *= 10;
          i += (n % 10);
          n /= 10;
    }
    n=i;
    int k = 0;
    while (i>0)
    {
          i/=10;
          k++;
    }
    j-=k;
    return j;
}

int main(int argc, char *argv[])
{
    int qtest, n;
    cin >> qtest;
    for (int i=0; i<qtest; i++)
    {
        cin >> n;
        int j = inv(n, n);
        
        for (int k =0; k<j; k++)
        {
            cout << "0";
        }
        cout << n << endl;
        
    }
    return EXIT_SUCCESS;
}
