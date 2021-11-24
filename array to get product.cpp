
//137533 Kelvin Lemanta

// Getting product of an array whose elements are input by the user 

#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i,  pro = 1;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    cout << "Input values of the array declared as ten: 10, 20, 30, 40...100";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        pro *= arr[i];
    }
    cout << "Product of array elements : " << pro;
    return 0;
}
