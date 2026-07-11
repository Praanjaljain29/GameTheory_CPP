// Problem: Nim Game
// Platform: HackerRank
// Problem Link: https://www.hackerrank.com/challenges/nim-game-1/problem
// Concept: Nim Sum (XOR)

#include <bits/stdc++.h>
using namespace std;

string nimGame(vector<int> pile) {
    int nimSum = 0;

    for(int stones : pile) {
        nimSum ^= stones;
    }

    if(nimSum != 0) {
        return "First";
    }

    return "Second";
}
