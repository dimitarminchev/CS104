#include <iostream>
using namespace std;
int main()
{
    int cap, capKB, sec, min, h, recTime, recSize;

    cout << "Enter disk capacity (bytes): ";
    cin >> cap;
    cout << "Enter hours of recording: ";
    cin >> h;
    cout << "Enter minutes of recording: ";
    cin >> min;
    cout << "Enter seconds of recording: ";
    cin >> sec;
    
    capKB = cap / 1024;

    recTime = h * 3600 + min * 60 + sec;
    recSize = recTime;

    if (cap > recSize) cout << "Free space available: " << cap << " KB. \nRecording size: " << recSize << " KB. \nLeftover space: " << cap - recSize << " KB." << endl;
    else if (cap < recSize) cout << "No space available." << "\nAvailable space: " << cap << " KB. \nRecording size: " << recSize << " KB. \nRequired space: " << recSize - cap << " KB." << endl;

    return 0;
}