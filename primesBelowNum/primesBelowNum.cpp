#include <iostream>

using namespace std;

void primesBelowNum(int num){
    int *v = new int[num];
    int aux = 0;

    for(int i = 2; i <= num; i++)
    {
        int count = 0;
        for(int j = 2; j <= i; j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        if(count == 1)
        {
            v[aux] = i;
            aux++;
        }
    }
    cout << "[";
    for(int i = 0; i < aux; i++)
    {
        if(i < aux - 1)
        {
            cout << v[i] << ", ";
        }
        else
        {
            cout << v[i] << "]";
        }
    }
    cout << endl;
}


int main()
{
    int num;
    cin >> num;
    primesBelowNum(num);
    return 0;
}