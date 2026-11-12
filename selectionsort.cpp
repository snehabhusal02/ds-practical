
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, min;
    float salary[50], temp;

    cout << "Enter the number of employees: ";
    cin >> n;

    cout << "Enter employee salaries:" << endl;

    for(i = 0; i < n; i++)
    {
        cin >> salary[i];
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(salary[j] < salary[min])
            {
                min = j;
            }
        }

        temp = salary[i];
        salary[i] = salary[min];
        salary[min] = temp;
    }

    cout << "\nSalaries in ascending order:" << endl;

    for(i = 0; i < n; i++)
    {
        cout << salary[i] << " ";
    }

    cout << "\n\nTop 5 highest salaries:" << endl;

    for(i = n - 1; i >= n - 5 && i >= 0; i--)
    {
        cout << salary[i] << " ";
    }

    return 0;
}
