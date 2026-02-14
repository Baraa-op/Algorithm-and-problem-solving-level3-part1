#include <iostream>
#include<iomanip>
using namespace std;




void Fill_Matrix_With_Order_Numbers(int arr[3][3] , int Rows , int Cols)
{
    int Counter = 0 ;
    for(short i = 0 ; i < Rows ; i++)
    {
        for(short j = 0 ; j < Cols ; j++)
            {
                Counter++ ;
                arr[i][j] = Counter;
            }
    }
}

void Print_Matrix(int arr[3][3],int Rows ,int Cols)
{
    for(int i = 0 ; i < Rows; i++)
    {
        for(int j = 0 ; j < Cols; j++)
            {
                cout << left << setw(3) << arr[i][j] << "   "  ;
            }
            cout << "\n" ;
    }
}


int main() 
{
    int arr[3][3] ;
    Fill_Matrix_With_Order_Numbers(arr,3,3);
    Print_Matrix(arr,3,3);
}
    
