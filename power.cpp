#include<iostream>
using namespace std;

int power(int a, int b){
    cin >> a >> b;

    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
    
}

int main(){
    int a, b;
    
    

    int ans = power(a,b);
    cout << "answer is " << ans << endl;

    return 0;
    

}