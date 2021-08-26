#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for (int cases = 0; cases< testcases; cases++){
        int n;
        cin >> n;
        int arr[n][n];
        for (int j = 0 ; j < n; j++)
            for (int k = 0 ; k < n; k++)
                cin >> arr[j][k];

        int count = 0;

        for (int i = 0; i< n; i++){
            for (int j = 0; j < n; j++){
                int value = arr[i][j];
                for (int p = i; p < n; p++)
                    for (int q = j; q < n; q++){
                        if (value > arr[p][q])
                            count++;
                    }
            }
        }
        cout << count << endl;
    }
}