#include <iostream>
#include <vector>

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

        
    }
    
    std::cout<<"Hello World";

    return 0;
}