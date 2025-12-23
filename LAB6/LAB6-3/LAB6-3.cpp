#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// --- 1. ส่วนสำคัญ: ต้องมี Prototype ตรงนี้เพื่อแก้ Error ตัวแดง ---
void displayStudentInfo(string name, string id, double score, char grade);
void calculateGrade(double score, char& grade);

int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];

    // TODO: วนรับ name/id และคะแนนด้วย for loop
    for (int i = 0; i < N; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        // ใช้ ws เพื่อรับชื่อที่มีช่องว่างและป้องกันการข้ามบรรทัด
        getline(cin >> ws, name[i]);

        cout << "Enter student " << i + 1 << " id: ";
        cin >> id[i];

        total[i] = 0; // รีเซ็ตคะแนนรวมเป็น 0 สำหรับนักเรียนแต่ละคน

        // TODO: nested loop (ลูปซ้อนลูป) สำหรับรับคะแนน M วิชา
        for (int j = 0; j < M; j++) {
            cout << "Enter student " << i + 1 << " score" << j + 1 << ": ";
            cin >> score[i][j];
            total[i] += score[i][j]; // สะสมคะแนนเข้าในตัวแปร total[i]
        }

        // TODO: calculateGrade(total[i], grade[i]);
        calculateGrade(total[i], grade[i]);
        cout << endl;
    }

    cout << "------------------------------------" << endl;

    // TODO: แสดงผลโดยใช้ displayStudentInfo
    for (int i = 0; i < N; i++) {
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
        cout << "------------------------------------" << endl;
    }

    return 0;
}

// --- 2. ส่วนเนื้อหาฟังก์ชัน (ต้องวางไว้ด้านล่าง main) ---
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