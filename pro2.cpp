#include<iostream>
#include<string>

using namespace std;

istream &ioFunction(istream &is)
{
    int s=0;
    while(is>>s)
    {
        // if ( (is.rdstate() & is.failbit ) != 0 )
        // {
        //     cout << "failbit is set" << endl;
        //     // cin.clear();
        //     // cin.ignore(1000,'\n');
        // }
        // else
            cout << s << endl;
    }

    //将流的状态复位，使得main函数中能继续使用
    is.clear();
    cout << "-----" << endl;
    return is;
}

int main()
{
    ioFunction(cin);
    string s;
    while(cin>>s)
        cout << s << endl;

    return 0;
}