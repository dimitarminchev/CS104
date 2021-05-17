#include <iostream>
using namespace std;
int main()
{
    int space, hours, minutes, seconds;
    cout << "Enter the amount of space on your harddrive(in bytes): ";
    cin >> space;
    cout << "Enter the amount of hours of the recording: ";
    cin >> hours;
    cout << "Enter the amount of minutes of the recording: ";
    cin >> minutes;
    cout << "Enter the amount of seconds of the recording: ";
    cin >> seconds;

    double spaceKBs = space / 1024;
    double Recording = hours * 3600 + minutes * 60 + seconds;
    double Remaining = spaceKBs - Recording;
    if (spaceKBs < Recording)
    {
        cout << "Not enough space.";
        return 0;
    }
    else if (spaceKBs >= Recording)
    {
        cout << "There is enough space for the recording. Remaining space: " << Remaining << " KB";
        return 0;
    }
    else if (spaceKBs == Recording)
    {
        cout << "There is jsut enough space for the recording. No remaining space.";
        return 0;
    }
}