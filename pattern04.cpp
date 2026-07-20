#include<bits/stdc++.h>
using namespace std;
class solution {
public:
void pattern(int N) {
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=i; j++) {
            cout << i << " " ;
        }
        cout << endl;
       }
    }
};

int main() {
    solution sol;
    int N;
    cin >> N;
    sol.pattern(N);

    return 0;

}

