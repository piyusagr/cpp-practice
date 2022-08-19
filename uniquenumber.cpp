#include <bits/stdc++.h>
using namespace std;
int psetBit(int n, int pos)
{
    return (n | (1 << pos));
}
void unique(int arr[], int n)
{
    int sum = 0;
    // vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ arr[i];
    }
    int temp=sum;
    int setbit = 0, pos = 0;
    while (setbit != 1)
    {
        setbit = sum & 1;
        pos++;
        sum = sum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
        if (setBit(arr[i], pos - 1))
        {
            newxor =newxor^ arr[i];
        }
    cout << newxor << endl;
    cout << temp ^ newxor << endl;
    // return sum;
}

int main()
{
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    unique(arr, m);
}