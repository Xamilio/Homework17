#include <iostream>
using namespace std;
//1 
// 
//int f(int num, int x);
//
//int main()
//{
//    int n, x;
//
//    cout << "Введите число: ";
//    cin >> n;
//    cout << "Введите степень: ";
//    cin >> x;
//    cout << n << " в степени " << x << " = " << f(n, x);
//}
//
//int f(int n, int x)
//{
//    int t = 1;
//
//    for (int i = 0; i < x; i++)
//    {
//        t *= n;
//    }
//
//    return t;
//}

//2 
 
int f(int num, int x);

int main()
{
    int n, x;

    cout << "Введите 1 число: ";
    cin >> n;
    cout << "Введите 2 число: ";
    cin >> x;
    cout << "Сумма чисел между " << n << " и " << x << " = " << f(n, x);
}

int f(int n, int x)
{
    int t = 0;

    while (n < x) 
    {
        t = t + n;
        n++;
    }

    return t;
}




