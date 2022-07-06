#include <iostream>
using namespace std;





string omk(string arr[], int n, int d){
    for (int i = 0 ; i < d ; i++){
        for (int j = 0 ; j < n ; j++){
            if (j==0){
                arr[j] = arr[n-1];
            }else {
                arr[j] = arr[j-1];
            }
        }
    }
    return arr;
}


int main()
{
    string arr[4] = {"omk","bouk","enty","ena"};
    cout << omk (arr,4,3);

}