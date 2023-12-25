#include <iostream>
#include <math.h>
using namespace std;

bool checkSNT(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            return false;
        }
    return true;
}
    

int UCLN(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}


bool so_nguyen_to_cung_nhau(int a, int b)
{
    if (UCLN(a, b) == 1)
    {
        return true;
    }
    return false;
}
void tim_uoc_so(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

int ktSNT(int x){
    if (x < 2){
        return 0;
    }
    for (int i = 0; i <= sqrt(x); i ++ ){
        if (x % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b;
    do
    {
        cout << "Nhap a: ";
        cin >> a;
        cout << "Nhập b: ";
        cin >> b;
    } while (a < 0 || b < 0);

    if (checkSNT(a) == true) // a là int n
    {
        cout << a << " la so nguyen to" << endl; // true
    }
    else
    {
        cout << a << " khong phai la so nguyen to" << endl; // false 
    }

    if (checkSNT(b) == true)
    {
        cout << b << " la so nguyen to" << endl;
    }
    else
    {
        cout << b << " khong phai la so nguyen to" << endl;
    }

    if (so_nguyen_to_cung_nhau(a, b) == true)
    {
        cout << a << " va " << b << " la hai so nguyen to cung nhau";
    }
    else
    {
        cout << a << " va " << b << " khong la hai so nguyen to cung nhau";
    }
    cout << endl;
    cout << "Uoc so cua a: ";
    tim_uoc_so(a);
    cout << endl;
    cout << "Uoc so cua b: ";
    tim_uoc_so(b);
    cout << endl;
    int dem = 0;
    if (a > b)
    {
        for (int i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
                dem++;
        }
    }

    else if (a == b)
    {
        for (int i = 1; i <= b; i = i + 1)
        {
            if (a % i == 0 && b % i == 0)
                dem++;
        }
    }

    else
    {
        for (int i = 1; i <= a; i = i + 1)
        {
            if (a % i == 0 && b % i == 0)
                dem++;
        }
    }
    cout << a << " va " << b << " co " << dem << " uoc so giong nhau";
    cout << endl;
    cout << "UCLN: " << UCLN(a, b) << endl;

    if (ktSNT(a) == 1) // a là int n
    {
        cout << a << " la so nguyen to" << "\n"; // true
    }
    else
    {
        cout << a << " khong phai la so nguyen to" << "\n"; // false 
    }

   
    if (ktSNT(b) == 1)
    {
        cout << b << " la so nguyen to" << "\n";
    }
    else
    {
        cout << b << " khong phai la so nguyen to" << "\n";
    }

    
}