//#include <iostream>
//#include <vector>

#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
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
 
 
//#include <bits/stdc++.h>
//#include <vector>
using namespace std;
 
 
int main(){
    int n;//number of people
    cin>>n;
    
    vector<double> w(n);//one’s body weight
    vector<double> input(n);
    vector<double> output(n);
    vector<double> r(n);//raitio
    
    
    double minimized_r=10;
    
    vector<double> w_max(n);
    vector<double> r_loop(n);
    
    for(int i=0;i<n;i++){
        cin>>w.at(i);
        /*
            0
          1   2
        3   4   5
        
        
        
        */
    }
    
  
     sort(w.begin(), w.end()); // in ascending order
     
     
   
     do {
         double r_max_loop=0;
         //1th tier
         input.at(0)=0;
         output.at(0)=input.at(0)+w.at(0);
         
         //2th tier
         input.at(1)=output.at(0)/2;
         output.at(1)=input.at(1)+w.at(1);
         
         input.at(2)=output.at(0)/2;
         output.at(2)=input.at(2)+w.at(2);
         
         //3th tier
         input.at(3)=output.at(1)/2;
         output.at(3)=input.at(3)+w.at(3);
         
         input.at(4)=(output.at(1)+output.at(2))/2;
         output.at(4)=input.at(4)+w.at(4);
         
         input.at(5)=output.at(2)/2;
         output.at(5)=input.at(5)+w.at(5);
       
         
         for(int i=0;i<n;i++){
             r.at(i)=input.at(i)/w.at(i);
            // if(r_max_loop<r.at(i))r_max_loop=r.at(i);
            r_max_loop=max(r_max_loop,r.at(i));
         }
         //cout<<r_max_loop<<endl;
         
 
         if(r_max_loop<=minimized_r){
             minimized_r=r_max_loop;
             for(int i=0;i<n;i++){
             w_max.at(i)=w.at(i);
             r_loop.at(i)=r.at(i);
         }
         }
         
       
    
  } while (next_permutation(w.begin(), w.end()));
 cout<<"Optimaizetion"<<endl;
 cout<<endl;
  cout<<"       "<<w_max.at(0)<<endl;
  cout<<"     "<<w_max.at(1)<<"    "<<w_max.at(2)<<endl;
  cout<<"  "<<w_max.at(3)<<"    "<<w_max.at(4)<<"    "<<w_max.at(5)<<endl;
 
  
  cout<<endl;
  
  
  cout.precision(3);
  //cout.fixed;
  cout<<"              "<<r_loop.at(0)<<endl;
  cout<<"       "<<r_loop.at(1)<<"       "<<r_loop.at(2)<<endl;
  cout<<"  "<<r_loop.at(3)<<"       "<<r_loop.at(4)<<"        "<<r_loop.at(5)<<endl;
  
  cout<<endl;
  
  
    cout<<"to minimize r = "<<minimized_r<<endl;
    
    
}