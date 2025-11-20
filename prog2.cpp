#include <iostream>
using namespace std;
class Time
{
     // FORMAT MODIFIERS
public:
    int h, m, s;
public:
    // METHOD
    void setTime(int hours, int minutes, int seconds)
    {
        h = hours;
        m = minutes;
        s = seconds;
    }
    void getTotal_seconds()
    {
        int total = h * 3600 + m * 60 + s;
        cout << "Total seconds : " << total << endl;
    }
};
int main()
{
    int h, m, s;
    cout << "Enter Hours : ";
    cin >> h;
    cout << "Enter Minutes : ";
    cin >> m;
    cout << "Enter The Total No. Seconds : ";
    cin >> s;
    Time t;
    t.setTime(h, m, s);
    t.getTotal_seconds();
    return 0;
}

