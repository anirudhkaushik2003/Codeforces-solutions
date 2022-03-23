#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int W, H, x1, y1, x2, y2, w, h, x, y;
    while (t--)
    {
        cin >> W >> H;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> w >> h;
        if (W - x2 > x1)
        {
            x = W - x2;
        }
        else
        {
            x = x1;
        }
        if (H - y2 >  y1)
        {
            y = H - y2;
        }
        else
        {
            y = y1;
        }
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        if(w > x)
        {
            x = w - x;
        }
        else{
            x = 0;
        }
        if(h > y)
        {
            y = h - y;
        }
        else{
            y = 0;
        }
        x = pow(x,2);
        y = pow(y,2);
        x += y;
        x = pow(x,0.5);
        cout << x << endl;
    }
}