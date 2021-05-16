#include <iostream>
#include <array>
#include <time.h>

using namespace std;

void Create(array<int, 100>& arr, int n);
void Print(array<int, 100>& arr, int n);
void SwapArray(array<int, 100>& arr, int n);

int main()
{
    srand((unsigned int)time(NULL));

    int n;
    cout << "Enter a size of array: "; cin >> n;

    array<int, 100> arr = { 0 };

    Create(arr, n);
    Print(arr, n);
    cout << "SwapArray: "<<endl ;
    SwapArray(arr, n);
    Print(arr, n);
    cout << endl;
    return 0;
}

void Create(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}
void Print(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void SwapArray(array<int, 100>& arr, int n)
{
    if (n / 2 == 0)
    {
        for (int i = 0; i < n; i = i + 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    else{
        for (int i = 0; i < n-1; i = i + 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}