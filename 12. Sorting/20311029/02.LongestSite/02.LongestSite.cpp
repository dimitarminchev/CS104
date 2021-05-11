#include <iostream>
#include<vector> 
#include<regex> 

using namespace std;

int main()
{
    //1 3 3 7 9 9 9 9 11 11 12 14

    string input;

    getline(cin, input);

    regex reg("\\s+");

    int count = 1;

    int result = INT_MIN;

    vector<string> resultV{
    sregex_token_iterator(input.begin(), input.end(), reg, -1), {} };

    for (int i = 0; i <= resultV.size() - 2; i++)
    {
        if (resultV[i] == resultV[i + 1])
        {
            count++;

            if (result < count)
            {
                result = count;
            }
        }
        else 
        {
            count = 1;
        }
    }

    cout << result;

    return 0;
}
