#include <iostream>
using namespace std;
int main() {
    cout << "Please input the volume" << endl;
    int volume;
    int both_buckets = 0; // променлива която показва колко пъти се изважда 5 (кофа 2 и 3 литра)
    int bucket_two_litre, bucket_three_litre; //променливи които показват колко пъти - 2 .. 3 по отделно
    cin >> volume;
    while (volume - 5 > 0) {     // проверка! дали има 5 или повече литра останали в обема (volume) 
        both_buckets++;
        volume = volume - 5;
    }
    //Всички възможни остатъци след делене на 5
    if (volume == 1) {
        bucket_two_litre = 1;
        cout << "Times used both buckets: " << both_buckets << endl;
        cout << "Times used a 2 litre bucket: " << bucket_two_litre << endl;
    }
    else if (volume == 2) {
        cout << "Times used both buckets: " << both_buckets << endl;
        cout << "Times used a 2 litre bucket: 1";
    }
    else if (volume == 3) {
        cout << "Times used both buckets: " << both_buckets << endl;
        cout << "Times used a 3 litre bucket: 1";
    }
    else if (volume == 4) {
        cout << "Times used both buckets: " << both_buckets << endl;
        cout << "Times used a 2 litre bucket: 2";
    }
    return 0;
}