// Câu 1: Viết chương trình thực hiện các yêu cầu sau:
// a) Nhập 2 số nguyên dương a và b. Nếu nhập sai thì phải nhập lại đến khi đúng. (1đ)
// b) Cho biết a và b có phải là 2 số nguyên tố cùng nhau hay không? (1đ)
// Định nghĩa: 2 số được gọi là nguyên tố cùng nhau khi có ước chung lớn nhất là 1. Ví dụ:
// 10 và 13; 25 và 36...
// c) Cho biết a và b có bao nhiêu ước số giống nhau?


#include<iostream>
#include<math.h>
using namespace std;


bool so_nguyen_to_cung_nhau(int a, int b){
    if ((a, b) == 1){
        return true;
    }
    return false; 
}

int main(){
    int a, b;
    do{
        cout << "Nhập a = ";
        cin >> a;

        cout << "Nhập b = ";
        cin >> b;

    }while (a < 0 || b < 0);
    cout <<"a và b " << so_nguyen_to_cung_nhau(a, b)<< " số nguyên tố cùng nhau" << "\n";
}