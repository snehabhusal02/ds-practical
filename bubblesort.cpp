
#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    float salary[50], temp;

    cout << "Enter the number of employees: ";
    cin >> n;

    cout << "Enter employee salaries:" << endl;

    for(i = 0; i < n; i++)
    {
        cin >> salary[i];
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(salary[j] > salary[j + 1])
            {
                temp = salary[j];
                salary[j] = salary[j + 1];
                salary[j + 1] = temp;
            }
        }
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
