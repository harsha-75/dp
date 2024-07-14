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
vector<int> dp(5,-1);
char numtoalpha(char num)
{
	  return 'a'+(num-'1');
}
int noofoutcomes(string s,int i,int n)
{
	  c++;
	  int ans=0;
	  
      if(i==n)
      {
      	   return 1;
      }
      
      if(dp[i]!=-1)
      {
      	  return dp[i];
      }
      ans+=noofoutcomes(s,i+1,n);

      if(i<n-1 && s[i]=='1')
      {
      	   ans+=noofoutcomes(s,i+2,n);
      }

      if(i<n-1 && s[i]=='2' && (s[i]>='0' && s[i]<='6'))
      {
      	   ans+=noofoutcomes(s,i+2,n);
      }

       return dp[i]=ans;
     
}
void outcomes(string s,int i,int n,string str)
{
	  if(i==n)
	  {
	  	  cout<<str<<endl;
	  	  str.clear();
	  	  return;
	  }
	  outcomes(s,i+1,n,str+numtoalpha(s[i]));
	   if (i < n - 1) {
        int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
        if (num >= 10 && num <= 26) {
            outcomes(s, i + 2, n, str + (char)('a' + num - 1));
        }
    }
}
int main()
{
	#ifndef ONLINNE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
   #endif
   string s;
   cin>>s;
   string str;
   int n=s.length();
   outcomes(s,0,n,str);
   cout<<noofoutcomes(s,0,n)<<endl;
   cout<<c;
}