#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> result(rowIndex + 1);

        for (int i = 0; i <= rowIndex; i++)
        {
            result[i].resize(i + 1, 1);

            for (int j = 1; j < i; j++)
            {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
            }
        }
        return result[rowIndex];
    }
};

void printTriangle(const vector<int> &row)
{

    for (int num : row)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    Solution solution;

    cout << "Test Case 1: numRows = 3" << endl;
    printTriangle(solution.getRow(1));
    cout << endl;

    cout << "Test Case 2: numRows = 1" << endl;
    printTriangle(solution.getRow(2));
    cout << endl;

    cout << "Test Case 3: numRows = 0" << endl;
    printTriangle(solution.getRow(3));
    cout << endl;

    return 0;
}