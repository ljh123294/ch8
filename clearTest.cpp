#include<iostream>
#include<string>

using namespace std;

void test(istream &is)
{
    int a = 0;
    // while (a != -1)
    // {
    //     cin >> a;
    while (is >> a)
    {
        
        // if ( (cin.rdstate() & std::iostream::failbit ) != 0 )
        // {
        //     cout << "failbit is set" << endl;
        //     // cin.clear();
        //     // cin.ignore(1000,'\n');
        // }
        // // else
            cout << a << endl;
    }
}

int main()
{
    test(cin);

    return 0;
}