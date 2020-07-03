#include <iostream>
using namespace std;

#include<iostream>
using namespace std;

int main()
{
    short x, y;
    cin >> x;
    cin >> y;
    if (x < 0)
    {
        if (y < 0) cout << 3 << endl;
        else cout << 2 << endl;

    }
    else
    {
        if (y < 0) cout << 4 << endl;
        else cout << 1 << endl;

    }

    return 0;
}

// x, y가 입력되면 1 ~ 4분면 중 속하는곳을 리턴
// -x  y 2  x  y 1
// -x -y 3  x -y 4