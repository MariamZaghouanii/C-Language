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
    cout << "Addition 1" << endl;
    cout << "Subtraction 2" << endl;
    cout << "Product 3 " << endl;
    cout << "Division 4" << endl;
    int choice;
    cout << "Choose an operation : ";
    cin >> choice;
    if ( choice == 1){
        res = a + b;
    } else if( choice == 2){
        res = a - b;
    } else if( choice == 3){
        res = a * b;
    } else {
        res = a / b;
    }
    cout << "The result = " << res << endl;


}