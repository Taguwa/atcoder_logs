#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <random>
#include <regex>

//#include <bits/stdc++.h>

#define MOD 1000000007
#define rng(i, a, b) for(int i = int(a); i < int(b); i++)
#define rep(i, b) rng(i, 0, b)
#define rlg(i, a, b) for(int i = int(a); i <= int(b); i++)
#define rlp(i, b) rlg(i, 0, b)
#define pb push_back
#define eb emplace_back
#define bg begin()
#define ed end()

using namespace std;
using ll = long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N),B(N);
    rep(i,N) A[i];
    rep(i,N) B[i];
    
    int k_chai = 0;
    rep(i,N) k_chai += A[i] - B[i];
    if(k_chai == K || (K - k_chai) % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
