#include <iostream>
using namespace std;



class Calculator
{   
public:

    float add(float a, float b)
    {
        return a + b; 
    }



    float sub(float a, float b)
    {
        return a - b;
    }



    float prod(float a, float b)
    {
        return a * b; 
    }



    float div(float a, float b)
    {
        if ( b == 0)
        {
            cout <<"DIVISION BY ZERO IS INDEFINED" << endl;            
        } else
        {
            return a / b;
        }
    }    
};



int main()
{
    int choice;
    Calculator calc;



    cout <<" For Addition type '1'" << endl;
    cout <<"For Subtraction type '2'" << endl;
    cout <<"For Product type '3'" << endl;
    cout <<"For Division type '4'" << endl;


    cout <<"Enter your choice : " << endl;
    cin >> choice;


    float a, b;
    cout <<"Enter 1st number : " << endl;
    cin >> a;
    cout <<"Enter 2nd number : " << endl;
    cin >> b;
    while ( choice >= 1 && choice <= 4)
    {
        if ( choice == 1 )
        {
            cout <<"The result = " << calc.add(a,b) << endl;
            break;
        } else if ( choice == 2)
        {
            cout <<"The result = " << calc.sub(a,b) << endl;
            break;
        } else if ( choice == 3)
        {
            cout <<"The result = " << calc.prod(a,b) << endl;
            break;
        } else 
        {
            cout <<"The result = " << calc.div(a,b) << endl;
            break;
        }        
    }   
    return 0;    
}




