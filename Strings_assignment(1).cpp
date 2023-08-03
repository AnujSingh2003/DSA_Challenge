

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=1;i<s.size();i+=2){
        s[i]='#';
    }
    cout<<s;

    return 0;
}


#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        c++;
    }
    }
    cout<<"no.of consonants "<<s.size()-c;
    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string str;
    for(int i=s.size()-1;i>=0;i--){
        str+=s[i];
    }
    if(s.compare(str)==0){
        cout<<"palindrome";
    }
    else {
        cout<<"not palindrome";
    }
    return 0;
}



#include <iostream>
#include <algorithm> // For the reverse function
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string st;
    int n=s.size();

      reverse(s.begin()+n/2,s.end());
      st=s;
     cout<<st;
    
    
return 0;
    
}

#include <iostream>
#include <algorithm> // For the reverse function
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        int num=int(s[i]);
        cout<<num-48;
    }
    return 0;
}



