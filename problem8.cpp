#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int first = a[0];
    int count = 0;
    bool val = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i + 1] == first)
        {
            count++;
            val = true;
            continue;
        }
        if (!val)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    a[j] = a[j + 1];
                    n--;
                }
            }
        }
    }

    if (count)
    {
        n -= count;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}