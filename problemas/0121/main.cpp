#include <stdio.h>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_diff = 0;
        int current_min = prices[0];
        for(auto price: prices){
            cout << "price: " << price << endl;
            if(current_min > price){
                current_min = price;
                cout << "\tcurrent_min: " << current_min << endl;
            }
            if(price - current_min > max_diff){
                max_diff = price - current_min;
                 cout << "\tmax_diff: " << max_diff << endl;
            }
        }
        return max_diff;
    }
};


int main(int argc, char *argv[]){
    vector<int> prices{8,1,5,4,2,3};
    Solution sol1;
    for(int num: prices){
        cout << num << ",";
    }
    cout << endl;
    cout << "Solucion: " << sol1.maxProfit(prices) << endl;
    return 0;
}