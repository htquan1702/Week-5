#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int m = x;
    x = y;
    y = m;
    cout << &x << " " << &y << endl;
}
void swap2(int& x, int& y)
{
    int m = x;
    x = y;
    y = m;
    cout << &x << " " << &y << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << &a << " " << &b << endl;
    swap(a, b);
    swap2(a, b);
    return 0;
}

//2 phuong thuc la khac nhau va cho ra ket qua khac nhau
