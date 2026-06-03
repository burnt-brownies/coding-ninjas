/* Given a string ‘str’ and a pattern ‘pat’, you have to find all occurrences of the pattern in the string. You have to print the starting positions of all occurrences of the pattern in the string. */

#include<iostream>
#include<string>
using namespace std;

int main(){
    string text , pat ;
    cin >> text >> pat ;

    for ( int i = 0 ; i < text.size() ; i++){
        bool flag = false ;
        int k = i;
        for ( int j = 0 ; j < pat.size() ; j ++){
            
            if ( text[k] == pat[j]){
                flag = true;
                k++;
            }
            else {
                flag = false ;
                break;
            }
        }
        if(flag == true){
            cout << i << " ";
        }
    }
}