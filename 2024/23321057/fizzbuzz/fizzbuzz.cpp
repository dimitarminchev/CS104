//���������� ��� ����� a � b, �������� ������ ����� � ��������� �� � �� b, ��� ������� �� ���� �� ���, �� �������� "fizz", 
// ��� �� ���� �� ���, �� �������� "buzz", ��� �� ���� ������������ �� ��� � ���, �� �������� "fizzbuzz".
//�������� ���� :1 20
//�������� ����� :1 2 fizz 4 buzz fizz 7 8 fizz buzz 11 fizz 13 14 fizzbuzz 16 17 fizz 19 buzz
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    for (int k = 1; k <= 20; k++)
    {
        int a = (k / 10) % 10;
        int b = (k / 1) % 10;
        if (k % 3 == 0) 
        {
            cout << "fizz" << " ";
        }
        else  if  (k % 5 == 0)
        {
            cout << "buzz" << " ";
                
        }
        
         else if ((k % 3 == 0) && (k % 5 == 0))
        { 
            
        }

                    
         cout << k << " ";
    }
    return 0;
}