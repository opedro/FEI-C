/* Pedro Aparecido Ruiz da Silva 22113035-4
prof Monael ex espelho versão: 5.0.0.4*/
#include <cstdlib>
#include <iostream>

using namespace std;
int num1, num2, num3, num4, isesp;

int espelio(int num3, int num4)
{
	int i = 0;
    while (num3> 0)
	{
        i *= 10;
        i += (num3 % 10);
    	num3 /= 10;
    }
	if (i == num4)
	    return 1;
 	else
 	    return 0;
}

int main(int argc, char *argv[])
{
	while(!cin.eof())
	{
		cin >> num1 >> num2;
		isesp = espelio(num1,num2);
		if (isesp == 0)
		{
			cout << "nao espelho" <<endl;
		}
		else if (isesp == 1)
		{
		    cout << "espelho" <<endl;
		}
	}
	
	return 0;
}

