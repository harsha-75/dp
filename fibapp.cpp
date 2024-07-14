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
int c=0;
// vector<int> dp(100,-1);
// int fib(int n)
// {
// 	  c++;
// 	  if(dp[n]!=-1)
// 	  {
// 	  	  return dp[n];
// 	  }
// 	  if(n==0||n==1)
// 	  {
// 	  	   return n;
// 	  }
// 	  dp[n]=fib(n-1)+fib(n-2);

// 	  return dp[n];
// }
int main()
{
	#ifndef ONLINNE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
   #endif
	int n;
	cin>>n;
	 vector<int> dp(n,-1);
        dp[0]=0;
        dp[1]=1;
	 for(int i=2;i<n;i++)
	 {
           dp[i]=dp[i-1]+dp[i-2];
           // cout<<dp[i]<<" ";
	 }
	 cout<<endl;
	 cout<<dp[n-1];
       // cout<<fib(n)<<endl;
	   // cout<<c;
	} 