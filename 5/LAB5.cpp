#include <iostream>
#include <algorithm> // (ทางเลือก: ใช้ฟังก์ชัน max() มาตรฐานของ C++)

using namespace std;

// ฟังก์ชัน maxOfThree(a, b, c) สำหรับหาค่าสูงสุดด้วยการเปรียบเทียบ
int maxOfThree(int a, int b, int c) {
    // กำหนดให้ตัวแปร 'max_val' เริ่มต้นจากค่า a
    int max_val = a;

    // เปรียบเทียบ b กับค่า max_val ปัจจุบัน
    if (b > max_val) {
        max_val = b; // ถ้า b มากกว่า ให้เปลี่ยน max_val เป็น b
    }

    // เปรียบเทียบ c กับค่า max_val ปัจจุบัน
    if (c > max_val) {
        max_val = c; // ถ้า c มากกว่า ให้เปลี่ยน max_val เป็น c
    }

    // คืนค่าสูงสุดที่หาได้
    return max_val;
}

// ฟังก์ชันหลัก (Main Function) สำหรับการเรียกใช้งาน
int main() {
    // 1. กำหนดค่าตัวเลข
    int num1 = 10;
    int num2 = 15;
    int num3 = 5;

    // 2. เรียกใช้ฟังก์ชัน maxOfThree เพื่อหาค่าสูงสุด
    int result = maxOfThree(num1, num2, num3);

    // 3. แสดงผลลัพธ์ตามตัวอย่างที่ต้องการ
    cout << "Maximum value is: " << result << endl;

    // --- ทางเลือก (Option) สำหรับ C++ ที่ใช้ฟังก์ชันมาตรฐาน ---
    // int result_std = max({num1, num2, num3});
    // cout << "Maximum value (Standard): " << result_std << endl;

    return 0;
}