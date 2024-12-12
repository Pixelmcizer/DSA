#include <iostream>//input output lib he ,  zaruri he 
using namespace std;//std:: na likhna pade thatswhy bro
int main (){
    int n  ;
    cout << "Enter the size of Pattern : ";
     cin >> n ;
     int number = 1 ;
    for (int  i = 1 ; i <= n; i++)
    {   

        for (int j = 1; j<= i; j++)
        {
            cout << number ;
            number ++ ;
        }
        cout << "\n";
    }
    return 0 ;
}