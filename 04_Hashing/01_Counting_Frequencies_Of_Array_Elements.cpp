#include "../dsa.hpp"

using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> arr(n);
   for(int i = 0; i<n; i++){
        cin >> arr[i];
   }

   // precompute
   int hash[13] = {0};
   for(int i=0; i<n; i++){
        hash[arr[i]] += i;
   }

   int q;
   cin >> q;
   while(q--){
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
   }

    return 0;
}