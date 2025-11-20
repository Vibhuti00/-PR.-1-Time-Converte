#include <iostream>
using namespace std;
class Time
{
    // FORMAT MODIFIERS
public:
    int h; // HOURS
    int m; // MINUTES
    int s; // SECONDS
public:
    // METHOD
    void setSeconds(int total_seconds)
    {
        h = total_seconds / 3600;
        m = (total_seconds % 3600) / 60;
        s = total_seconds % 60;
    }
    void getTime()
    {
        cout << "HH:MM:SS => " << h << ":" << m << ":" << s << endl;
    }
};
int main()
{
    int total_seconds;
    cout << "Enter The Total No. Of Seconds : ";
    cin >> total_seconds;
    Time t;
    t.setSeconds(total_seconds);
    t.getTime();
    return 0;
}

