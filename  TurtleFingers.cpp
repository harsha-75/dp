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
int main()
{
	#ifndef ONLINNE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
   #endif
    int t;
    cin>>t;
    while(t--){
          int n;
          cin>>n;
          map<int,int> m;
          vector<int> v;
          int c=0,k;
          for(int i=0;i<n;i++)
          {
               int x;
               cin>>x;
               v.push_back(x);
               m[x]++;
               if(m[x]>1)
               {
                    c++;
                    k=x;
               }
          }
          if(c==v.size()){
          	    cout<<"NO"<<endl;
          }
          else
          {
          	   bool flag=true;
          	   for(int i=0;i<n;i++)
          	   {
          	   	    if(k!=v[i] && (v[i]%k)==0)
          	   	    {
          	   	    	 flag=false;
          	   	     }   

          	             }
     }
}
}