#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n, sum;
    double total = 0;

    print("1. Interest rate is 2.3%");
    print("2. Interest rate is 2.6%");
    print("3. Interest rate is 2.9%");
    print("4. Interest rate is 3.3%");
    print("5. Interest rate is 3.5%");
    print("6. Interest rate is 3.8%");

    print("Please select [1-6]");
    cin >> n;

    print("Enter amount to invest");
    cin >> sum;

    switch (n) 
    {
        case 1: 
            total = sum + sum * 2.3 / 100;
            break;
        case 2:
            total = sum + sum * 2.6 / 100;
            break;
        case 3:
            total = sum + sum * 2.9 / 100;
            break;
        case 4:
            total = sum + sum * 3.3 / 100;
            break;
        case 5:
            total = sum + sum * 3.5 / 100;
            break;
        case 6:
            total = sum + sum * 3.8 / 100;
            break;
        default: 
            print("Please enter a valid number");
            break;
    }

    if (total != 0) {
        print("Total sum is: " << total);
    }

    return 0;
}

