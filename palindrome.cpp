#include<iostream>
using namespace std;

bool checkPalinndrome(string str, int i, int j){
    if(i > j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else {
        return checkPalinndrome(str, i+1, j-1);
    }
}
int main() {
    string name;
    cin >> name;

    cout <<endl;
    int isPalindrome = checkPalinndrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout <<"It's a Palindrome." <<endl;
    }
    else {
        cout <<"It's not a Palindrome." <<endl;
    }
    return 0;
}