#include <bits/stdc++.h>
using namespace std;

vector<int> getUnexpiredTokens(int timeToLive, vector<string> queries) {
    vector<int> results;
    map<string, int> tokens;

    for (const string& query : queries) {
        stringstream ss(query);
        string operation, tokenId;
        int currentTime;
        ss >> operation;
        
        if (operation == "generate") {
            ss >> tokenId >> currentTime;
            tokens[tokenId] = currentTime + timeToLive;
        } else if (operation == "renew") {
            ss >> tokenId >> currentTime;
            if (tokens.find(tokenId) != tokens.end() && tokens[tokenId] > currentTime) {
                tokens[tokenId] = currentTime + timeToLive;
            }
        } else if (operation == "count") {
            ss >> currentTime;
            int unexpiredCount = 0;
            for (const auto& token : tokens) {
                if (token.second > currentTime) {
                    unexpiredCount++;
                }
            }
            results.push_back(unexpiredCount);
        }
    }

    return results;
}

int main() {
    int timeToLive = 35;
    vector<string> queries = {
        "generate token1 3", "count 4", "generate token2 6",
        "count 7", "generate token3 11", "count 41"
    };

    vector<int> results = getUnexpiredTokens(timeToLive, queries);

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
