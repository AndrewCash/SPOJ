#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int> > arr) {

    // Primary Diagonal
    int primaryDifference = 0;
    int column = 0;
    for (int i=0; i<arr.size(); i++){
        primaryDifference += arr[i][column];
        column++;
    }


    // Secondary Diagonal
    int secondaryDifference = 0;
    column = arr.size();
    for (int i=0; i<arr.size(); i++){
        secondaryDifference += arr[i][column];
        column--;
    }

    // Result
    int result = abs(primaryDifference - secondaryDifference);
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int> > arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
