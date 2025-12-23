#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// --- 1. ส่วนสำคัญ: ต้องมี Prototype ตรงนี้เพื่อแก้ Error ตัวแดง ---
void displayStudentInfo(string name, string id, double score, char grade);
void calculateGrade(double score, char& grade);

int main()
{
    const int N = 5;
    string name[N], id[N];
    double score[N];
    char grade[N];

    // TODO: วนรับข้อมูล N คน
    for (int i = 0; i < N; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        // ใช้ ws เพื่อรับชื่อที่มีช่องว่างและป้องกันการข้ามบรรทัด
        getline(cin >> ws, name[i]);

        cout << "Enter student " << i + 1 << " id: ";
        cin >> id[i];

        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];

        // TODO: calculateGrade(score[i], grade[i]);
        calculateGrade(score[i], grade[i]);
        cout << endl;
    }

    cout << "=== Student Information Results ===" << endl;

    // TODO: วนแสดงผล N คน ด้วย displayStudentInfo
    for (int i = 0; i < N; i++) {
        cout << "Student " << i + 1 << " Information:" << endl;
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
        cout << "------------------------------------" << endl;
    }

    return 0;
}

// --- 2. ส่วนเนื้อหาฟังก์ชัน (Definition) ---
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