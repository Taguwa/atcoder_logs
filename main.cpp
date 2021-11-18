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
    int H, W;
    cin >> H >> W;
    vector<vector<int>> N(H,vector<int>(W)),ans(H,vector<int>(W));
    vector<int> h(H), w(W);
    rep(i,H){
        rep(j,W){
            cin >> N[i][j];
            h[i]+=N[i][j];
            w[j]+=N[i][j];
            }
        }

    
    
    rep(i,H){
        rep(j,W) {
            ans[i][j] = h[i] + w[j] - N[i][j];
        }
    }
    
    rep(i,H){
        rep(j,W) {
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
    
    return 0;
}
