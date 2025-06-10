#include <iostream>

using namespace std;

class TimeConverter {
public:
    
    void secondsToHHMMSS(int totalSeconds) {
        int hours = totalSeconds / 3600;
        int remainingSeconds = totalSeconds % 3600;
        int minutes = remainingSeconds / 60;
        int seconds = remainingSeconds % 60;

        cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;
    }

    
    int HHMMSSToSeconds(int hours, int minutes, int seconds) {
        return (hours * 3600) + (minutes * 60) + seconds;
    }
};

int main() {
    TimeConverter converter;


    int totalSeconds = 4200;
    cout << "Input: Enter total seconds: " << totalSeconds << endl;
    cout << "Output: ";
    converter.secondsToHHMMSS(totalSeconds);


    int hours = 4;
    int minutes = 34;
    int seconds = 30;
     cout << "Input: Enter hours: " << hours << endl;
    cout << "Input: Enter minutes: " << minutes << endl;
     cout << "Input: Enter seconds: " << seconds << endl;

    
    int totalSeconds2 = converter.HHMMSSToSeconds(hours, minutes, seconds);
    cout << "Output: Total seconds: " << totalSeconds2 << endl;
    
}
