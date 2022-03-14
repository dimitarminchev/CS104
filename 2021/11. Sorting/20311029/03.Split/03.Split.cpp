#include <iostream>
#include <regex>
#include <vector>
#include <algorithm> 
#include <string> 

using namespace std;

void OutputVector(vector<int> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }

    cout << endl;
}

int main()
{
    string inputArray;

    getline(cin, inputArray);

    regex reg("\\s+");

    vector<string> vect{ sregex_token_iterator(inputArray.begin(),inputArray.end(),reg,-1) ,{} };

    vector<int> vectEven;
    vector<int> vectOdd;

    for (int i = 0; i < vect.size(); i++)
    {
        if (stoi(vect[i]) % 2 == 0)
        {
            vectEven.push_back(stoi(vect[i]));
        }
        else if (stoi(vect[i]) % 2 != 0)
        {
            vectOdd.push_back(stoi(vect[i]));
        }
    }

    sort(vectEven.begin(), vectEven.end());
    sort(vectOdd.begin(), vectOdd.end());

    OutputVector(vectOdd);
    OutputVector(vectEven);
}