#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, K;

    cin >> N >> K;

    long long sup = 0;
    int soma = 0;

    unordered_map<int, int> auxiliary;

    auxiliary[0] = 1;

    for (int i = 0; i < N; i++) 
    {
        int a;
        cin >> a;
        soma += a;
        if (auxiliary.count(soma - K)) { sup += auxiliary[soma - K]; }

        auxiliary[soma]++;
    }

    cout << sup << endl;

    return 0;
}
