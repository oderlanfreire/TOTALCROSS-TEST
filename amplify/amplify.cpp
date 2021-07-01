#include <iostream>

using namespace std;

void amplify(int num)
{
    int v[num];

    for (int i = 1; i <= num; i++)
    {
        v[i] = i;
        if (v[i] % 4 == 0)
        {
            v[i] = i * 10;
        }
    }

    cout << "[";
    for (int i = 1; i <= num; i++)
    {
        if (i < num)
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
    int num;
    cin >> num;
    amplify(num);
    return 0;
}