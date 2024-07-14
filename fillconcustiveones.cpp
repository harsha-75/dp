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
void  consecutiveones(int n,int i,string s)
{
	  if(i==n)
	  {
	  	   cout<<s<<endl;
	  	   s.clear();
	  	   return;
	  }
	  if(i>0 && s[i-1]=='1')
	  {
	  	     consecutiveones(n,i+1,s+'0');
	  }
	  else
	  {
	  	  consecutiveones(n,i+1,s+'1');
	      consecutiveones(n,i+1,s+'0');
	  }
}
int main()
{
	#ifndef ONLINNE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
   #endif

    int n;
    cin>>n;
    string s;
    consecutiveones(n,0,s);
}