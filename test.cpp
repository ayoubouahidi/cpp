#include <iostream>

using namespace std;

float test_echo(int num)
{
    if (num % 2 == 0)
        return true;
    return false;
}

int main()
{
    float result = test_echo(2);
    cout << "the result is "<< result << endl;
    return 0;
}
