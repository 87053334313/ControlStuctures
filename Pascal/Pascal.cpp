
#include <iostream>
using namespace std;

void main()
{
    //����������� �������     value = value * (i - k) / (k + 1);
    setlocale(LC_ALL, "");
    int h;
    cout << "������� ������ ������������: "; cin >> h;
    int nf = 1;
    for (int n = 1; n <= h; n++) 
    {
        cout << 1 << "\t";
        nf *= n;
        int mf = 1;
        for (int m=1;m<=n;m++) 
        {
            mf *= m;
            int nmf = 1;
            for (int nm = 1; nm <= n - m;) 
            {
            }
        }
    }
}
