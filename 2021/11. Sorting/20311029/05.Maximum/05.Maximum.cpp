#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
    string ar1;
    string wholeAr = "";

    getline(cin, ar1);
    wholeAr += ar1 + " ";

    getline(cin, ar1);
    wholeAr += ar1 + " ";

    getline(cin, ar1);
    wholeAr += ar1 + " ";

    getline(cin, ar1);
    wholeAr += ar1 + " ";

    regex reg("\\s+");

    vector<string> vect{ sregex_token_iterator(wholeAr.begin(),wholeAr.end(),reg,-1) ,{} };
    vector<int> resultVect;

    int numOfDigits;
    cin >> numOfDigits;

    transform(vect.begin(), vect.end(), back_inserter(resultVect),
        [](const string str) { return stoi(str); });

    vect.clear();

    sort(resultVect.begin(), resultVect.end(), greater<int>());

    for (int i = resultVect.size() - numOfDigits; i < resultVect.size(); i++)
    {
        cin >> resultVect[i];
    }

    cout << endl;

    sort(resultVect.begin(), resultVect.end(), greater<int>());

    for (int i = 0; i < 16; i++)
    {
        if (i % 4 == 0.0 && i != 0)
        {
            cout << endl;
        }
        cout << resultVect[i] << " ";
    }

    return 0;
}
