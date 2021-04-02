#include <iostream>
using namespace std;
int main()
{
    int space, hours, min, sec;
    cout << "Enter the amount of space on your harddrive(in bytes): ";
    cin >> space;
    cout << "Enter the amount hours of the recording: ";
    cin >> hours;
    cout << "Enter the amount minutes of the recording: ";
    cin >> min;
    cout << "Enter the amount seconds of the recording: ";
    cin >> sec;

    double spaceKBs = space / 1024;
    double recording = hours * 3600 + min * 60 + sec;
    double remaining = spaceKBs - recording;
    if (spaceKBs < recording)
    {
        cout << "Not enough space.";
        return 0;
    }
    else if (spaceKBs >= recording)
    {
        cout << "There is enough space for the recording. Remaining space: " << remaining << " KB";
        return 0;
    }
    else if (spaceKBs == recording)
    {
        cout << "There is jsut enough space for the recording.";
        return 0;
    }
}