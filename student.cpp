
#include <iostream>
using namespace std;

int main()
{
    // 2D Array - Student Marks
    int marks[3][3];
    int total;
    float avg;
    int i, j;

    cout << "\n\nEnter marks of 3 students in 3 subjects:\n";

    for(i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << ":\n";

        for(int j = 0; j < 3; j++)
        {
            cout << "Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    cout << "\nStudent Marks Table\n";
    cout << "Student\tSub1\tSub2\tSub3\tTotal\tAverage\n";

    for(i = 0; i < 3; i++)
    {
        total = 0;

        for(int j = 0; j < 3; j++)
            total += marks[i][j];

        avg = total / 3.0;

        cout << i + 1 << "\t";

        for(int j = 0; j < 3; j++)
            cout << marks[i][j] << "\t";

        cout << total << "\t" << avg << endl;
    }

    cout << "\nSubject Averages:\n";

    for(int j = 0; j < 3; j++)
    {
        total = 0;

        for(i = 0; i < 3; i++)
            total += marks[i][j];

        avg = total / 3.0;

        cout << "Subject " << j + 1<< " Average = " << avg << endl;
    }
    

    return 0;
}
