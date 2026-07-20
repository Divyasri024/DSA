#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    void pattern5(int N) {
        for( int i=0; i<=N; i++) {
            for(int j=1; j<=N-i; j++) {
                cout << j;
            }
        cout << endl;
        }
    }

};
int main(){
    solution sol;
    int N;
    cin >> N;
    sol.pattern5(N);
    return 0;

}