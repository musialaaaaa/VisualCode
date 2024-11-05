#include <iostream>
#include <cmath>
using namespace std;

void hinh_chu_nhat() {
    double dai, rong, chu_vi, dien_tich;
    cout << "Nhập chiều dài hình chữ nhật: ";
    cin >> dai;
    cout << "Nhập chiều rộng hình chữ nhật: ";
    cin >> rong;
    chu_vi = 2 * (dai + rong);
    dien_tich = dai * rong;
    cout << "Chu vi hình chữ nhật: " << chu_vi << endl;
    cout << "Diện tích hình chữ nhật: " << dien_tich << endl;
}

void tam_giac() {
    double a, b, c, chu_vi, dien_tich, p;
    cout << "Nhập cạnh thứ nhất của tam giác: ";
    cin >> a;
    cout << "Nhập cạnh thứ hai của tam giác: ";
    cin >> b;
    cout << "Nhập cạnh thứ ba của tam giác: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        chu_vi = a + b + c;
        p = chu_vi / 2;
        dien_tich = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Chu vi tam giác: " << chu_vi << endl;
        cout << "Diện tích tam giác: " << dien_tich << endl;
    } else {
        cout << "Ba cạnh không tạo thành một tam giác hợp lệ." << endl;
    }
}

void hinh_thang() {
    double day_lon, day_nho, chieu_cao, dien_tich;
    cout << "Nhập đáy lớn của hình thang: ";
    cin >> day_lon;
    cout << "Nhập đáy nhỏ của hình thang: ";
    cin >> day_nho;
    cout << "Nhập chiều cao của hình thang: ";
    cin >> chieu_cao;
    dien_tich = ((day_lon + day_nho) * chieu_cao) / 2;
    cout << "Diện tích hình thang: " << dien_tich << endl;
}

void hinh_tron() {
    double ban_kinh, chu_vi, dien_tich;
    cout << "Nhập bán kính hình tròn: ";
    cin >> ban_kinh;
    chu_vi = 2 * M_PI * ban_kinh;
    dien_tich = M_PI * ban_kinh * ban_kinh;
    cout << "Chu vi hình tròn: " << chu_vi << endl;
    cout << "Diện tích hình tròn: " << dien_tich << endl;
}

void menu() {
    cout << "Lựa chọn:" << endl;
    cout << "1: Tính chu vi và diện tích hình chữ nhật" << endl;
    cout << "2: Tính chu vi và diện tích tam giác" << endl;
    cout << "3: Tính diện tích hình thang" << endl;
    cout << "4: Tính chu vi và diện tích hình tròn" << endl;
    cout << "5: Thoát" << endl;
}

int main() {
    char tiep_tuc;
    int lua_chon;
    
    do {
        menu();
        cout << "Nhập lựa chọn của bạn (1-5): ";
        cin >> lua_chon;
        
        switch (lua_chon) {
            case 1:
                hinh_chu_nhat();
                break;
            case 2:
                tam_giac();
                break;
            case 3:
                hinh_thang();
                break;
            case 4:
                hinh_tron();
                break;
            case 5:
                cout << "Chương trình kết thúc." << endl;
                return 0;
            default:
                cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << endl;
        }
        
        cout << "Bạn có muốn tiếp tục không? (Y/N): ";
        cin >> tiep_tuc;
        
    } while (tiep_tuc == 'Y' || tiep_tuc == 'y');
    
    cout << "Chương trình kết thúc." << endl;
    return 0;
}
