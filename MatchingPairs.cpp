#include <iostream>
#include <stack>

using namespace std;

int findMatchingPair(string input){
    stack <char> stk;
    int index = -1;
    for(int i = 0; i < input.length(); i++){
        if(input[i] >= 'A' && input[i] <= 'Z'){
            stk.push(input[i]);
        }else if(input[i] >= 'a' && input[i] <= 'z' && !stk.empty()){
            
            char top = stk.top();
            if(top == input[i]-32){
                stk.pop();
                index = i;
            }else{
                break;
            }
        }else{
            break;
        }
    }

    return index;
}

int main(){
    string str = "LBBbbNnUQqubl";
    cout << findMatchingPair(str) << endl;
    return 0;
}
