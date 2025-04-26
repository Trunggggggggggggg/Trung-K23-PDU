#include <iostream>
using namespace std;

struct SinhVien {
    string ten;
    float toan;
    float ly;
    float hoa;
    float dtb; // di?m trung bình
};

int main() {
  
    SinhVien ds[3] = {
        {"Nguyen Van A", 9, 8.5, 9, 0},
        {"Tran Thi B", 7, 6.5, 7.5, 0},
        {"Le Van C", 8, 8, 8, 0}
    };

    int n = 3;

   
    for (int i = 0; i < n; i++) {
        ds[i].dtb = (ds[i].toan + ds[i].ly + ds[i].hoa) / 3;
    }

  
    cout << "Sinh vien co diem trung binh >= 8:\n";
    for (int i = 0; i < n; i++) {
        if (ds[i].dtb >= 8) {
            cout << "Ten: " << ds[i].ten << ", DTB: " << ds[i].dtb << endl;
        }
    }

    return 0;
}

