#include <iostream>
using namespace std;

int main()
{
    int n;
    int number, negative;
    int mult_odd;
    int max_neg;
    int result = mult_odd - max_neg;
    const int N = n;
    cout << "Введите количество чисел: ";
    cin >> n;
    cout << endl;
    cout << "Введите числа: ";
    for(int i = 1; i <= N; i++)
    {
        cout << "Введите число: " << endl;
        cin >> number;
        if (number % 2 != 0)
        {
            mult_odd *= number;
        }
        cout << mult_odd;
    }   
    return 0;
}