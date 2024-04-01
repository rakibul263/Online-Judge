/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-28 21:50:20
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string time;
        cin >> time;
        int hour = (time[0] - '0') * 10 + (time[1] - '0');
        int minute = (time[3] - '0') * 10 + (time[4] - '0');

        string ampmCal = "AM";
        if (hour == 0)
            hour = 12;
        else if (hour >= 12)
        {
            if (hour > 12)
                hour -= 12;
            ampmCal = "PM";
        }
        cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << " " << ampmCal << endl;
    }

    return 0;
}