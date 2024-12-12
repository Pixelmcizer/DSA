#include <iostream>//input output lib he ,  zaruri he 
using namespace std;//std:: na likhna pade thatswhy bro
int main (){
    int n  ;
    cout << "Enter the size of  Pattern : ";
     cin >> n ;
    for (int  i = 1 ; i <= n; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout << j ;
        }
        cout << "\n";
    }
    cout << endl;
    cout << "Reverse triangle"<< endl;
    for(int i = 1 ; i <=n ; i++)
    {
        for (int j = i ; j >= 1 ; j--)
        {
            cout << j;
        }
        cout << endl ; 
    }
    return 0 ;
}