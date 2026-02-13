#include <iostream>
#include<iomanip>
using namespace std;




int Random_Number(int From, int To)
{
    int Random = rand() % (To - From + 1) + From ;
    return Random ;
}

void Fill_Matrix_With_Random_Number(int arr[3][3], short Rows , short Cols)
{
    for(int i = 0 ; i < Rows; i++)
    {
        for(int j = 0 ; j < Cols; j++)
            {
                arr[i][j] = Random_Number(1 , 100) ;
            }
    }
}


int Sum_Of_Row_Matrix(int arr[3][3] , short Row , short Cols)
{
    int Sum = 0 ;
    for(int i = Row-1 ; i < Row; i++)
    {
        
        for(int j = 0 ; j < Cols; j++)
            {
                Sum+=arr[i][j] ;
                
            }
    }
    
    return Sum ;
}


void Print_Matrix(int arr[3][3], short Rows , short Cols)
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


void Fill_Array_With_Sum_Of_Row_Matrix(int arr[3][3] , int arr2[3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        arr2[i] = Sum_Of_Row_Matrix(arr , i+1 , 3);
    }
}

void Print_Array(int array[3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        cout << "Sum of Row " << i+1 << " : " << array[i] << "\n" ;
    }
}

int main() 
{
    srand((unsigned)time(NULL)) ;
    int arr2[3];
    int arr[3][3] ;
    Fill_Matrix_With_Random_Number(arr , 3 , 3) ;
    Print_Matrix(arr , 3 , 3) ;
    cout << "\n\n" ;
    Fill_Array_With_Sum_Of_Row_Matrix(arr , arr2);
    Print_Array(arr2) ;
    
    
}
    
