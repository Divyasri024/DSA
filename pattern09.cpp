#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void pattern9 (int N) {
        for( int i =0; i <N; i++) 
        {
            for(int j = 0; j<N-i-1; j++) {
                cout << " ";
            }
            for(int j = 0; j<2*i+1; j++) {
                cout << "*";
            }
            for(int j = 0; j<N-i-1; j++) {
                cout << " ";
            }
        cout << endl;
        }
        for( int i =0; i <N; i++)
        {
            for(int j = 0; j< i; j++) {
                cout << " ";
            }
            for(int j = 0; j<2*N - (2*i+1); j++) {
                cout << "*";
            }
            for(int j = 0; j< i; j++) {
                cout << " ";
            }
            cout << endl;

        }

    }
};

int main(){
    solution sol;
    int N;
    cin >> N;
    sol.pattern9(N);
    return 0;

} 