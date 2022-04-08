#include <iostream>

using namespace std;

bool isValid(int n)
{

    if (n >= 0)
    {

        return true;
    }
    else
    {

        return false;
    }
}

bool isEven(int num)
{

    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void calculate(int num)
{
    if (num == 1)
    {
        cout << "Finished!" << endl;
    }
    else if (isEven(num))
    {
        num = num / 2;
        cout << num << " ";
        calculate(num);
    }
    else
    {
        num = (num * 3) + 1;
        cout << num << " ";
        calculate(num);
    }
}

int main()
{

    int input;

    cout << "Please enter an integer (greater than zero): ";
    cin >> input;

    if (isValid(input))
    {
        calculate(input);
    }
    else
    {
        cout << "Input not valid!" << endl;
        return 0;
    }

    return 0;
}