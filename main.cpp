#include <iostream>

using namespace std;

int main()
{
    int i,k=0;
    string s;
    cin>>s;
    char r[1000];
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
            {s[i]='\0';
            s[i+1]='\0';
            s[i+2]='\0';
            }
    }

    for(i=0;i<s.size();i++)
    {
        if(s[i]!='\0')
        {
            r[k]=s[i];
            k++;
        }


    }
    cout<<s<<endl;
    for(i=0;r[i]!='\0';i++)
        cout<<r[i];

    return 0;
}
