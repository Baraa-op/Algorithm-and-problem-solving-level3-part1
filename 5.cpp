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





int ColSum(int arr[3][3],short Rows ,short Cols)
{
    int Sum = 0 ;
    
    for(int i = 0 ; i < Rows ; i++)
    {
        Sum+=arr[i][Cols] ;
    }
    return Sum ;
}

void Fill_Array_With_Sum_Of_Col_Matrix(int arr[3][3], int ArrSum[3] , short Rows ,short Cols)
{
    for(int i = 0 ; i < Rows ; i++)
    {
        
        ArrSum[i] = ColSum(arr , Rows , i) ;
    }
}

void Print_Array(int array[3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        cout << "sum of col " << i+1 << " : " << array[i] << "\n" ;
    }
    
}

int main() 
{
    srand((unsigned)time(NULL)) ;
    int ArrSum[3] ;
    int arr[3][3] ;
    Fill_Matrix_With_Random_Number(arr) ;
    Print_Matrix(arr , 3 , 3) ;
    Fill_Array_With_Sum_Of_Col_Matrix(arr , ArrSum , 3 , 3) ;
    Print_Array(ArrSum);
}
    
