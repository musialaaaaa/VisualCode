#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra 3 cạnh có thoả mãn điều kiện là tam giác hay không
bool kiem_tra_tam_giac(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Hàm tính chu vi tam giác
float tinh_chu_vi(float a, float b, float c) {
    return a + b + c;
}

// Hàm tính diện tích tam giác bằng công thức Heron
float tinh_dien_tich(float a, float b, float c) {
    float p = (a + b + c) / 2; // Nửa chu vi
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    float a, b, c;
    
    // Nhập vào độ dài 3 cạnh của tam giác
    cout << "Nhập vào độ dài cạnh a: ";
    cin >> a;
    cout << "Nhập vào độ dài cạnh b: ";
    cin >> b;
    cout << "Nhập vào độ dài cạnh c: ";
    cin >> c;

    // Kiểm tra xem 3 cạnh có tạo thành tam giác hay không
    if (kiem_tra_tam_giac(a, b, c)) {
        float chu_vi = tinh_chu_vi(a, b, c); // Tính chu vi
        float dien_tich = tinh_dien_tich(a, b, c); // Tính diện tích
        
        // In ra chu vi và diện tích
        cout << "Chu vi của tam giác là: " << chu_vi << endl;
        cout << "Diện tích của tam giác là: " << dien_tich << endl;
    } else {
        cout << "Đây không phải là 3 cạnh của một tam giác!" << endl;
    }

    return 0;
}
