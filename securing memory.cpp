#include <iostream>
using namespace std;

struct MemoryLab {
    int data[2] = { 10, 20 }; // مصفوفة صغيرة جداً
    int secretKey = 9999;    // البيانات الحساسة خلفها مباشرة
};

int main() {
    MemoryLab lab;
    int index;

    cout << "Enter index to read (0-1): ";
    cin >> index;

    // جرب إدخال رقم 2
    // بما أن المصفوفة حجمها 2 (0 و 1)، فالعنصر رقم 2 هو فعلياً بداية مكان secretKey
    cout << "Value at index " << index << " is: " << lab.data[index] << endl;

    return 0;
}