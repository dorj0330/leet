#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result(numRows);
        for (int i = 0; i < numRows; i++)
        {
            result[i].resize(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
            }
        }
        return result;
    }
};

void printTriangle(const vector<vector<int>> &triangle)
{
    for (const auto &row : triangle)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main()
{
    Solution solution;

    cout << "Test Case 1: numRows = 1" << endl;
    printTriangle(solution.generate(1));
    cout << endl;

    cout << "Test Case 2: numRows = 2" << endl;
    printTriangle(solution.generate(2));
    cout << endl;

    cout << "Test Case 3: numRows = 3" << endl;
    printTriangle(solution.generate(3));
    cout << endl;

    return 0;
}