#include <iostream>//input output lib he ,  zaruri he 
using namespace std;//std:: na likhna pade thatswhy bro
int main (){
    int n  ;
    cout << "Enter the size of Pattern : ";
     cin >> n ;
     int number = 1 ;
     for(int i = 1 ; i <=n ; i++)
    {
        for (int j = 1 ; j <= n-i ; j++)
        {
            cout << " ";
        }
            cout << "*";
        for (int k = 2 ; k<i ; k++)
        {
            cout << " ";
        }
        
        for (int l = i-1 ; l >0; l--)
        {
            cout << " ";
        
            
        }
        if (i != 1)
        {cout << "*";}
        cout << endl;
    }   
    for (int i = n-1 ; i >= 1 ; i--)
    {
        for (int j = n-i ; j>=1 ; j--)
        {
            cout << " ";
        }
         cout << "*";
        for (int k = i ; k>2 ; k--)
        {
            cout << " ";
        }
        for (int l = 0 ; l <= i-2;l++)
        {
            cout << " "; 
        }
        if(i != 1)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    return 0 ;
}