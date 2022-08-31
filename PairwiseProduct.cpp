/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
long long Maxpairwise(vector<int>series){
  int n= series.size();
  int maxIndex=-1;
  for( int i=0; i<n; i++){
      if((series[i]>series[maxIndex]))
      {
          maxIndex=i;
          
      }
         
  } int maxIndex2=-1;
  for (int j=0;j<n;j++){
      if((series[j]>series[maxIndex2]) && (series[j]!=series[maxIndex])){
          maxIndex2=j;
      }
      
  }
  return ((long long) series[maxIndex])*series[maxIndex2];
}
int main()
{ int n;
  cout<<"Enter the range"<<endl;
  cin>>n;
  vector<int>series(n);
  cout<<"Enter the number"<<endl;
  for(int i=0;i<n;i++){
      cin>>series[i];
  }
  long long result = Maxpairwise(series);
   cout<<result<<endl;
   return 0;}
    
