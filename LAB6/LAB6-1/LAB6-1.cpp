#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// --- 1. ส่วนสำคัญ: ต้องมี Prototype ตรงนี้เพื่อแก้ Error ตัวแดง ---
void calculateGrade(double score, char& grade);
void displayStudentInfo(string name, string id, double score, char grade);

int main()
{
    string name, id;
    double score;
    char grade;

    // TODO: รับชื่อ (getline)
    cout << "Enter name: ";
    // ใช้ ws เพื่อข้าม Newline ที่อาจค้างใน Buffer ทำให้ getline ไม่ถูกข้าม
    getline(cin >> ws, name);

    // TODO: รับรหัสและคะแนน (cin)
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter score: ";
    cin >> score;

    cout << endl; // เว้นบรรทัดตาม Expected Output

    // TODO: calculateGrade(score, grade);
    // ส่ง score ไป และให้ฟังก์ชันเปลี่ยนค่าในตัวแปร grade (Pass by Reference)
    calculateGrade(score, grade);

    // TODO: displayStudentInfo(name, id, score, grade);
    displayStudentInfo(name, id, score, grade);

    return 0;
}

// --- 2. ส่วนเนื้อหาฟังก์ชัน (ต้องวางไว้ด้านล่าง main) ---
void calculateGrade(double score, char& grade) {
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}

void displayStudentInfo(string name, string id, double score, char grade) {
    cout << "Student Name: " << name << endl;
    cout << "Student ID : " << id << endl;
    cout << "Score : " << fixed << setprecision(2) << score << endl;
    cout << "Grade : " << grade << endl;
}