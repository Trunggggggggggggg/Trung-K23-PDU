#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[10];
    set<int> tapPhanBiet;

    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tapPhanBiet.insert(a[i]); 
    }

    cout << "So luong gia tri phan biet: " << tapPhanBiet.size() << endl;

    return 0;
}

