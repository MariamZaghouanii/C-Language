#include <iostream>

using namespace std;

int main()
{
    bool eff = true;
    while ( eff == true){
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
            cout << "The result = " << res << endl;
            eff = false;
        } else if( choice == '-'){
            res = a - b;
            cout << "The result = " << res << endl;
            eff = false;
        } else if( choice == '*'){
            res = a * b;
            cout << "The result = " << res << endl;
            eff = false;
        } else if( choice == '/'){
            res = a / b;
            cout << "The result = " << res << endl;
            eff = false;
        } else{
            cout << "There was an error choosing the operation" << endl;
            
        }
    
    }
    


}