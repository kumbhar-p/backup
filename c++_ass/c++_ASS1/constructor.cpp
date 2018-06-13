#include<iostream>
using namespace std;

class Sample
{
    private:
        int x;
        double y;
    public :
        Sample(); //Constructor 1
        Sample(int); //Constructor 2
        Sample(int, int); //Constructor 3
        Sample(int, double); //Constructor 4 */
};
 
Sample::Sample()
{
    x = 0;
    y = 0;
    cout << x  << " " << y << endl;
}

Sample::Sample(int p)
{
    x = p;
    y = 0;
    cout << x  << " " << y << endl;
}

Sample::Sample(int p, int q)
{
    x = p;
    y = q;
    cout << x  << " " << y << endl;
}

Sample::Sample(int p, double d)
{
    x = p;
    y = d;
    cout << x  << " " << y << endl;
}

int main()
{
    Sample s;
    Sample s1(10);
    Sample s2(20, 30);
    Sample s3(4, 2.5);


}
