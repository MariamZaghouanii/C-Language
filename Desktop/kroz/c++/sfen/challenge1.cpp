#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Calculator" << endl;
    cout << "enter first num: ";
    cin >> x ;
    cout << "enter second num: ";
    cin >> y ;

    int add = x + y;
    int sub = x - y;
    int prod = x * y;
    int div = x / y;

    cout << x << " + " << y << " = " << add << endl;
    cout << x << " - " << y << " = " << sub << endl;
    cout << x << " * " << y << " = " << prod << endl;
    cout << x << " / " << y << " = " << div << endl;

    return 0;
}