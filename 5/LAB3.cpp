#include <iostream>

using namespace std;

// 1. ฟังก์ชัน Swap แบบ Call by Value
// การส่งผ่านค่า (int a, int b) เป็นการคัดลอกค่า ทำให้การเปลี่ยนแปลงภายในฟังก์ชัน
// ไม่มีผลกระทบต่อตัวแปรต้นฉบับ (num1, num2) ใน main()
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // ณ จุดนี้ a และ b ถูกสลับค่าแล้ว แต่เป็นตัวแปร local ภายในฟังก์ชันเท่านั้น
}

// 2. ฟังก์ชัน Swap แบบ Call by Reference
// การส่งผ่านแบบอ้างอิง (int& a, int& b) ทำให้ a และ b ภายในฟังก์ชัน
// ชี้ไปยัง (หรืออ้างอิงถึง) ตำแหน่งหน่วยความจำเดียวกับตัวแปรต้นฉบับ (num1, num2)
void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    // การเปลี่ยนแปลงที่ a และ b มีผลกระทบโดยตรงต่อตัวแปร num1 และ num2 ใน main()
}

int main() {
    int num1 = 10;
    int num2 = 20;

    // --- ส่วนที่ 1: แสดงผลก่อน Swap ---
    cout << "Before swap: a = " << num1 << ", b = " << num2 << endl;

    // --- ส่วนที่ 2: ทดสอบ Call by Value ---
    // เรียกฟังก์ชัน โดยส่งค่า (10, 20) ไปให้ a และ b ในฟังก์ชัน
    swapByValue(num1, num2);

    // แสดงผลลัพธ์หลัง Call by Value (ค่าไม่เปลี่ยนแปลง)
    cout << "After swap (Call by Value): a = " << num1 << ", b = " << num2 << endl;

    // --- ส่วนที่ 3: ทดสอบ Call by Reference ---
    // เรียกฟังก์ชัน โดยส่งการอ้างอิง (Reference) ของ num1 และ num2 ไปให้ a และ b
    swapByReference(num1, num2);

    // แสดงผลลัพธ์หลัง Call by Reference (ค่าเปลี่ยนแปลงจริง)
    cout << "After swap (Call by Reference): a = " << num1 << ", b = " << num2 << endl;

    return 0;
}