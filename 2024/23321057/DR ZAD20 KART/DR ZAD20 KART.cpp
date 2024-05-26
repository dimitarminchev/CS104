// DR ZAD20 KART
#include <iostream>
using namespace std;

const string cards[13] = 
{
  "2" , "3", "4", "5", "6", "7", "8", "9", "10",
  "Vale", "Dama", "Pop", "Aso"
};

const string cols[4] = 
{
  "Spatiq", "Karo", "Kupa", "Pika"
};

int main() 
{
    int n;
    cin >> n;
    for (int i = 0; i < 13; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            int N = i * 4 + j + 1;
            if (n > N) 
            {
                continue;
            }
            cout << cards[i] << " " << cols[j];
            if (N != 52) 
            {
                cout << ", ";
            }
        }
    }
    cout << endl;
    return 0;
}
