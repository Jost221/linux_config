#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i: arr){
        if(i < 6){
            cout << -1 << endl;
        }

        int maxSum = 0;
        for (int j = i; j >= 1; --j) {
            for (int k = j - 1; k >= 1; --k) {
                for (int l = k - 1; l >= 1; --l) {
                    int sum = j + k + l;
                    if (sum <= i && sum > maxSum) {
                        maxSum = sum;
                    }
                }
            }
        }

    }
    
    std::cout<<"Hello World";

    return 0;
}