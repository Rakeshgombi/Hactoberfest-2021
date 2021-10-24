#include <bits/stdc++.h>
using namespace std;

bool isShuffle(string first, string second, string result){
    string combo =first+second;

    for(int i=0; i<combo.length(); i++){
        for(int j=i+1 ; j<combo.length(); j++){
            if(combo[i]>combo[j]){
                char temp = combo[i];
                combo[i]=combo[j];
                combo[j]=temp;
            }
        }
    }
    for(int i=0; i<result.length(); i++){
        for(int j=i+1 ; j<result.length(); j++){
            if(result[i]>result[j]){
                char temp = result[i];
                result[i]=result[j];
                result[j]=temp;
            }
        }
    }

    return combo.compare(result);
}

int main(){
    string first="XY";
    string second="12";
    string result="1XY2";
    
    if(isShuffle(first,second,result))
        cout<<"not valid shuffle";
    else
        cout<<"valid shuffle";
    return 0;
}