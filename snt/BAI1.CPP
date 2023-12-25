// SỐ NGUYÊN TỐ: LÀ SỐ CHIA HẾT CHO 1 VÀ chính nó 
// Đặc biệt số 1 không được coi là số nguyên tố

#include<iostream>
#include<math.h>
using namespace std; 

int ktsnt (int n){ // mặc định số 1 khoong phải là số nguyên tố
    if (n < 2){
        cout << "Không phải số nguyên tố" << "\n";
    }
    else {
        for (int i = 2; i <= sqrt(n) ; i ++){
            if (n % i == 0){
                cout << "Không phải số nguyên tố" << "\n";
                return 0;
            }
        }
        cout << "Là số nguyên tố!";
    }
}


int main(){
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;
    
    ktsnt(n);
    return 0;
}