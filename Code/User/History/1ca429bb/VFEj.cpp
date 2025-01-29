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

        int current_free_valet = i;
        int j  = 0;
        while (pow(2, j) < i) {j++;}

    }
    
    std::cout<<"Hello World";

    return 0;
}