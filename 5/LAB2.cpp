#include <iostream>
#include <iomanip> // สำหรับใช้ setprecision เพื่อกำหนดจำนวนทศนิยม

using namespace std;

// กำหนดค่าคงที่ PI
// ใช้ค่า 3.14159 เพื่อให้ได้ผลลัพธ์ที่ปัดเศษแล้วเป็น 78.54
const double PI = 3.14159;

// 1. ฟังก์ชันคำนวณพื้นที่วงกลม (Circle Area)
// สูตร: Area = PI * radius * radius
double circleArea(double radius) {
    return PI * radius * radius;
}

// 2. ฟังก์ชันคำนวณพื้นที่สี่เหลี่ยมผืนผ้า (Rectangle Area)
// สูตร: Area = width * height
double rectArea(double width, double height) {
    return width * height;
}

int main() {
    // --- กำหนดค่าสำหรับคำนวณ ---
    double circle_radius = 5.0; // รัศมีวงกลม
    double rect_width = 10.0;   // ความกว้างสี่เหลี่ยม
    double rect_height = 5.0;   // ความสูงสี่เหลี่ยม

    // --- คำนวณพื้นที่ ---
    double area1 = circleArea(circle_radius);
    double area2 = rectArea(rect_width, rect_height);

    // --- แสดงผลลัพธ์ ---

    // กำหนดรูปแบบการแสดงผล: fixed คือใช้ทศนิยมแบบคงที่, setprecision(2) คือ 2 ตำแหน่ง
    cout << fixed << setprecision(2);

    cout << "Circle Area = " << area1 << endl;

    // เปลี่ยนกลับเป็น setprecision(0) หรือไม่ใช้ setprecision สำหรับค่า 50 ที่เป็นจำนวนเต็ม
    // แต่ถ้าไม่เปลี่ยน ค่า 50 จะแสดงเป็น 50.00 ซึ่งก็ยังคงถูกต้อง
    cout << "Rectangle Area = " << area2 << endl;

    return 0;
}
