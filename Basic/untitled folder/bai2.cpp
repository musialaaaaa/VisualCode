#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    
    // Nhập số nguyên dương n thỏa mãn 1 <= n <= 20
    do {
        cout << "Nhập số nguyên dương n (1 <= n <= 20): ";
        cin >> n;
        if (n < 1 || n > 20) {
            cout << "Giá trị của n không hợp lệ. Vui lòng nhập lại!\n";
        }
    } while (n < 1 || n > 20);

    vector<float> arr(n);  // Tạo mảng với n phần tử

    // Nhập mảng gồm n số thực
    cout << "Nhập mảng gồm " << n << " số thực:\n";
    for (int i = 0; i < n; i++) {
        cout << "Phần tử thứ " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Hiển thị mảng vừa nhập
    cout << "Mảng vừa nhập: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Nhập số thực x và số nguyên k thỏa mãn 1 < k
    float x;
    int k;
    cout << "Nhập số thực x: ";
    cin >> x;
    do {
        cout << "Nhập số nguyên k (k > 1): ";
        cin >> k;
        if (k <= 1) {
            cout << "Giá trị của k phải lớn hơn 1. Vui lòng nhập lại!\n";
        }
    } while (k <= 1);

    // Chèn số thực x vào vị trí thứ k hoặc cuối mảng
    if (k <= n) {
        // Chèn x vào vị trí thứ k trong mảng
        arr.insert(arr.begin() + (k - 1), x);
    } else {
        // Chèn x vào vị trí cuối cùng (n+1)
        arr.push_back(x);
    }

    // Hiển thị mảng sau khi chèn
    cout << "Mảng sau khi chèn: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
