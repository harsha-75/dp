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
int c=0;
using namespace std;
void mini(vector<int> v,int i,int n,vector<int> &s)
{
	   c++;
	  if(i==n)
	  {
	  	   return;
	  }
	  if(i<3)
	  {
	  	   s.push_back(v[i]);
	  	   mini(v,i+1,n,s);
	  }
	  if(i>=3)
	  {
	  	   s.push_back(min(s[i-1],min(s[i-2],s[i-3]))+v[i]);
	  	   mini(v,i+1,n,s);
	  }
}
void mini2(vector<int> v,int i,int n,vector<int> &s)
{
	c++;
	if(s[i]!=-1)
	{
		 return;
	}
	   if(i==n)
	  {
	  	   return;
	  }
	  if(i<3)
	  {
	  	  s[i]=v[i];
	  	   // s.push_back(v[i]);
	  	   mini2(v,i+1,n,s);
	  }
	  if(i>=3)
	  {
	  	    s[i]=min(s[i-1],min(s[i-2],s[i-3]))+v[i];
	  	   // s.push_back(min(s[i-1],min(s[i-2],s[i-3]))+v[i]);
	  	    mini2(v,i+1,n,s);
	  }
}

int main()
{
	#ifndef ONLINNE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
   #endif

	vector<int> v;
   int n;

   cin>>n;

   for(int i=0;i<n;i++)
   {
   	   int x;
   	   cin>>x;
   	   v.push_back(x);
   }

    vector<int> s(n,-1);
      mini2(v,0,n,s);
    for(int i=0;i<n;i++)
    {
    	cout<<s[i]<<" ";
    }
    cout<<endl;
    cout<<c;
}