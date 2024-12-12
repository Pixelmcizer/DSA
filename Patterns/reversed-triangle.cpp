#include <iostream>//input output lib he ,  zaruri he 
using namespace std;//std:: na likhna pade thatswhy bro
int main (){
    int n  ;
    cout << "Enter the size of Pattern : ";
     cin >> n ;
     int number = 1 ;
    for (int  i = 1 ; i <= n; i++)
    {   
        for (int k = 1; k < i ; k++)
        {
            cout << " ";
        }
        for (int j = n+1 ; j>i; j--)
        {
            cout << i;
        }
        cout << "\n";
    }
    return 0 ;
}

// 1 1 1  1 
//  2 2 2
//     3 3
//        4 