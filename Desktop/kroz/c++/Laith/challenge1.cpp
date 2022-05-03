#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Type the 1st number : ";
    cin >> a;
    int b;
    cout << "Type the 2nd number : ";
    cin >> b;
    int res;
    cout << "Addition '+'" << endl;
    cout << "Subtraction '-'" << endl;
    cout << "Product '*' " << endl;
    cout << "Division '/'" << endl;
    char choice;
    cout << "Choose an operation : ";
    cin >> choice;
    if ( choice == '+'){
        res = a + b;
    } else if( choice == '-'){
        res = a - b;
    } else if( choice == '*'){
        res = a * b;
    } else {
        res = a / b;
    }
    cout << "The result = " << res << endl;


}