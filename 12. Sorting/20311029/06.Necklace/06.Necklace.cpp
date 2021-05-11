#include <iostream>
#include <vector>
#include <regex>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss;

    string inputArray;

    string currentNum;

    int currentNumInt = 0;

    getline(cin, inputArray);

    ss << inputArray;

    vector<int> arrayOdd;
    vector<int> arrayEven;

    while (ss.eof() != true)
    {
        ss >> currentNum;

        if (stoi(currentNum) >> currentNumInt)
        {
            if (stoi(currentNum) % 2 == 0)
            {
                arrayEven.push_back(stoi(currentNum));
            }
            else if (stoi(currentNum) % 2 != 0)
            {
                arrayOdd.push_back(stoi(currentNum));
            }
        }

        currentNum = "";
    }

    sort(arrayEven.begin(), arrayEven.end(), greater<int>());
    sort(arrayOdd.begin(), arrayOdd.end());

    for(int num : arrayOdd)
        cout << num << " ";

    for (int num : arrayEven)
        cout << num << " ";

    return 0;
}
