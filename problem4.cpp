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

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            cout << "Max: " << max << ", Index: " << i << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            cout << "Min: " << min << ", Index: " << i << endl;
        }
    }

    return 0;
}