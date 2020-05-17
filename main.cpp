#include <iostream>
#include <fstream>
using namespace std;
fstream odczyt;
int x;
int i=0;
string y;
bool sprawdzpali (string s1)
{
    int dl=s1.size();
    for (int i=0; i<dl/2; i++)
    if (s1[i]!=s1[dl-i-1])
    return false;
    return true;
}
int main()
{   cout<<"Lista palindromow znajdujacych sie w pliku:"<<endl;
    odczyt.open("dane.txt",ios::in);
    while(odczyt.good())
    {
        odczyt>>y;
        if(sprawdzpali(y)==true)
        {
            x++;
            i++;
            cout << i <<". "<<y<< endl;
        }
    }
    if(x<1)cout<<"W pliku nie ma palindromow";
    if(x==1) cout<<"W pliku wystepuje "<<x<<" palindrom.";
    if(x<=4) cout<<"W pliku wystepuja "<<x<<" palindromy.";
    if(x>=5) cout<<"W pliku wystepuje "<<x<<" palindromow.";
    odczyt.close();
    return 0;
}
