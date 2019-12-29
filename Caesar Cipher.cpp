#include <bits/stdc++.h>
using namespace std;

string encryption( string s,int key)
{
    key=key%26;
    string res="";
    for(auto i:s){
        if(!isalpha(i)){
            res+=i;
        }
        else if(isupper(i)){
            int ch=i-'A';
            ch=(ch+key)%26;
            res+=(char)(ch+'A');
        }
        else{
            int ch=i-'a';
            ch=(ch+key)%26;
            res+=(char)(ch+'a');
        }
    }

    return res;
}

string decryption(string s,int key)
{
    key=key%26;
    string res="";
    for(auto i:s){
        if(!isalpha(i)){
            res+=i;
        }
        else if(isupper(i)){
            int ch=i-'A';
            ch=(ch-key+26)%26;
            res+=(char)(ch+'A');
        }
        else{
            int ch=i-'a';
            ch=(ch-key+26)%26;
            res+=(char)(ch+'a');
        }
    }

    return res;
}

int main()
{
    cout<<"Enter The Key: ";
    int key;
    cin>>key;

    cin.ignore();

    cout<<"Enter The Plain Text: ";
    string s;
    getline(cin,s);

    string encrypt=encryption(s,key);

    cout<<"Cipher Text: "<<encrypt<<endl;

    string decrypt=decryption(encrypt,key);
    cout<<"Decrypted Text: "<<decrypt<<endl;

    return 0;
}
