// Câu 1: Viết chương trình thực hiện các yêu cầu sau:
// a) Nhập 2 số nguyên dương a và b. Nếu nhập sai thì phải nhập lại đến khi đúng. (1đ)
// b) Cho biết a và b có phải là 2 số nguyên tố cùng nhau hay không? (1đ)
// Định nghĩa: 2 số được gọi là nguyên tố cùng nhau khi có ước chung lớn nhất là 1. Ví dụ:
// 10 và 13; 25 và 36...
// c) Cho biết a và b có bao nhiêu ước số giống nhau?

#include <iostream>
#include <math.h>
using namespace std;

int songuyento(int a, int b)
{
    if (a < 2 || b < 2)
    {
        cout << "Không phải là số nguyên tố" << endl;
    }
    else
    {
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                cout << "a Không phải là số nguyên tố" << endl;
                return 0;
            }
        }
        for (int i = 2; i < sqrt(b); i++)
        {
            if (b % i == 0)
            {
                cout << "abKhông phải là số nguyên tố" << endl;
                return 0;
            }
        }
        cout << "Là số nguyên tố !";
    }
}

int main()
{
    int a, b;

    cout << "Nhập a = ";
    cin >> a;

    cout << "Nhập b =";
    cin >> b;

    do
    {
        if (a < 0)
        {
            cout << "Nhập lại a = ";
            cin >> a;
        }
        else
        {
            if (b < 0)
            {
                cout << "Nhập lại b = ";
                cin >> b;
            }
        }
    } while (a < 0 || b < 0);
    songuyento(a, b);
    return 0;
}