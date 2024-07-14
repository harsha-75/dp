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
int maxrodcutting(vector<int> prices,int n,vector<int> dp)
{
	 c++;
	  if(n==0)
	  {
	  	   return 0;
	  }
	  if(dp[n-1]!=-1)
	  {
	  	  return dp[n-1];
	  }
	  int ans=0;
	  for(int i=0;i<n;i++)
	  {
           ans=max(ans,prices[i]+maxrodcutting(prices,n-i-1,dp));
	  }
	  return dp[n-1]=ans;
}
int main()
{
	#ifndef ONLINNE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
   #endif

	int n;
	cin>>n;
	vector<int> prices;
	for(int i=0;i<n;i++)
	{
		   int x;
		   cin>>x;
		   prices.push_back(x);
	}
	vector<int> dp(n,-1);
	cout<<maxrodcutting(prices,n,dp)<<endl;
	cout<<c;
}