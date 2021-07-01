#include <iostream>

using namespace std;

bool isSameNum(int a, int b)
{
    if(a != b){
        return false;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << isSameNum(a, b) << endl;
    return 0;
}