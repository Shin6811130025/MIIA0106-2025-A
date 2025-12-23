#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// --- 1. Prototype สำหรับแก้ Error เส้นแดง ---
void displayStudentInfo(string name, string id, double score, char grade);
void calculateGrade(double score, char& grade);

int main()
{
    int size;

    // --- แก้ไข: เพิ่มระบบป้องกันการรับค่านักเรียน 0 หรือติดลบ ---
    do {
        cout << "Enter number of students (must be > 0): ";
        cin >> size;

        if (size <= 0) {
            cout << "Invalid input! Please enter a number greater than 0." << endl;
        }
    } while (size <= 0);
    // ลูปจะวนไปเรื่อยๆ จนกว่าผู้ใช้จะกรอกเลขที่มากกว่า 0

    cin.ignore(); // เคลียร์ newline ก่อนใช้ getline

    // สร้าง dynamic array
    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    // วนรับข้อมูล
    for (int i = 0; i < size; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]);

        cout << "Enter student " << i + 1 << " id: ";
        cin >> id[i];

        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];

        calculateGrade(score[i], grade[i]);
        cout << endl;
    }

    // วนแสดงผล
    cout << "------------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
        cout << "------------------------------------" << endl;
    }

    // ล้างหน่วยความจำ (ต้องมี [] เสมอเมื่อจองแบบ array)
    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}

// --- 2. ส่วนเนื้อหาฟังก์ชัน ---
void displayStudentInfo(string name, string id, double score, char grade) {
    cout << "Student Name: " << name << "\n";
    cout << "Student ID : " << id << "\n";
    cout << "Score : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade : " << grade << "\n";
}

void calculateGrade(double score, char& grade) {
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}