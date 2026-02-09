#include <iostream>
#include<iomanip>
using namespace std;




int Random_Number(int From, int To)
{
    int Random = rand() % (To - From + 1) + From ;
    return Random ;
}

void Fill_Matrix_With_Random_Number(int arr[3][3])
{
    for(int i = 0 ; i <= 2; i++)
    {
        for(int j = 0 ; j <= 2; j++)
            {
                arr[i][j] = Random_Number(1 , 100) ;
            }
    }
}

void Print_Matrix(int arr[3][3])
{
    for(int i = 0 ; i <= 2; i++)
    {
        for(int j = 0 ; j <= 2; j++)
            {
                cout << left << setw(3) << arr[i][j] << "   "  ;
            }
            cout << "\n" ;
    }
}

int main() 
{
    srand((unsigned)time(NULL)) ;
    
    int arr[3][3] ;
    Fill_Matrix_With_Random_Number(arr) ;
    Print_Matrix(arr) ;
    
}
