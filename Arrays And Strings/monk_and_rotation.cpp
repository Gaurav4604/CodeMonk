#include<iostream>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++){
        int n, k, dummy;
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j < n; j++){
            cin >> dummy;
            int index = (j + k) % n;
            arr[index] = dummy;
        }
        for (int j = 0; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
    }
}