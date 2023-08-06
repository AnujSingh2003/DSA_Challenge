#include <bits/stdc++.h>

using namespace std;

bool test(string word)
{
    for (int i = 0; i < word.length() - 1; i++) {
        for (int j = i + 1; j < word.length(); j++) {
            if (word[i] == word[j]) {
                return false;
            }
        }
    }
    return true;
}

int main()
{
	string str = "Filename";
	cout << "String: " << str;
	cout << "\nCheck said string contains unique characters! " << test(str) << endl; 
	str = "abc";
	cout << "\nString: " << str;
	cout << "\nCheck said string contains unique characters! " << test(str) << endl; 
}
