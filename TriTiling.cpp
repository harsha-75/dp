#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;
int nooftiles(int n)
{
	  if (n % 2 != 0) {
        return 0; // If n is odd, it's impossible to fill the grid completely
    }
    
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // Base case
    dp[2] = 3; // Another base case

    for (int i = 4; i <= n; i += 2) {
        dp[i] = dp[i-2] * 4 - dp[i-4]; // Derived from the recurrence relation
    }
    
    return dp[n];
}
int main()
{
	#ifndef ONLINNE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
   #endif

	int n;
	cin>>n;
   cout<<nooftiles(n);
}