#include <iostream>

using namespace std;

void arrayOfMultiples(int n, int tam)
{
    int v[tam];
    for(int i = 1, j = 0; i <= tam; i++, j++)
    {
        v[j] = n * i;
    }
    cout << "[";
    for(int i = 0; i < tam; i++)
    {
        if(i < tam - 1)
        {
            cout << v[i] << ", ";
        }
        else
        {
            cout << v[i] << "]" << endl;
        }
    }
}

int main()
{
    int n, tam;
    cin >> n;
    cin >> tam;
    arrayOfMultiples(n,tam);
    return 0;
}