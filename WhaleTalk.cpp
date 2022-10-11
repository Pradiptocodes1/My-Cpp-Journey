#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string input="turpentine and turtles";
    vector<char>vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
    vector<char>results;
    for(int i=0;i<input.size();i++){
        for(int j=0;j<input.size();j++){
            if(input[i]==vowels[j]){
                results.push_back(input[i]);
            }
        }
        if(input[i]=='u'||input[i]=='e'){
            results.push_back(input[i]);
        }
    }
    cout<<"Whale Says: "<<endl;
    for(int i=0;i<results.size();i++){
        cout<<results[i];
    }
}