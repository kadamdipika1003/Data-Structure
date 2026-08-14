#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[20];
    float marks;
};

void input(Student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> s[i].roll;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }
}

void display(Student s[], int n)
{
    cout << "\nStudent Details\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nRoll No: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }
}

int main()
{
    Student s[10];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    input(s, n);
    display(s, n);

    return 0;
}
