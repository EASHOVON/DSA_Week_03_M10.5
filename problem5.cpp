#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    bool found = false;
    bool start = false;
    bool coma = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            if (!start)
            {
                cout << "FOUND at index position: ";
                start = true;
            }
            cout << i;
            if (!coma)
            {
                cout << ", ";
                coma = true;
            }
            found = true;
        }
    }
    if (!found)
    {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}