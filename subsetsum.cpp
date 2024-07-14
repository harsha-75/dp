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
vector<vector<int> > ans;
void subsetsum(vector<int> v,int y,int i,int n,vector<int> v1)
{
	    if(i==n || y==0)
	    {
	    
	    	return;
	    }
	    
	    v1.push_back(v[i]);
	   	subsetsum(v,y-v[i],i+1,n,v1);
	   	v1.pop_back();
	    subsetsum(v,y,i+1,n,v1);
}
int main()
{
	#ifndef ONLINNE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
   #endif

	int sum,n;
	cin>>sum>>n;
     vector<int> v;
	for(int i=0;i<n;i++)
	{
		 int x;
		 cin>>x;
		 v.push_back(x);
	}
	  vector<int> v1;
     subsetsum(v,sum,0,n,v1);

     for(int i=0;i<ans.size();i++)
     {
     	   for(int j=0;j<ans[i].size();j++)
     	   {
     	   	   cout<<ans[i][j]<<" ";
     	   }
     	   cout<<endl;
     }
   
}