#include <iostream>//input output lib he ,  zaruri he 
using namespace std;//std:: na likhna pade thatswhy bro
int main (){
    int n  ;
    cout << "Enter the size of Square Pattern";
     cin >> n ;
    for (int  i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i+1 ;
        }
        cout << "\n";
    }
    return 0 ;
}