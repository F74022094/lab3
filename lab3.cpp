#include<iostream>
#include<cstdlib> 
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
	int w;
	int sum;
	int n;
	vector<int>we;
//	ifstream in("infile",ios::in);
	ifstream inFile("infile", ios::in);
    if(!inFile) {
    cerr << "Failed opening" << endl;
    exit(1);
    }
 /*   ofstream outFile("stdout", ios::out);
    if(!outFile) {
    cerr << "Failed opening" << endl;
    exit(1);
    }*/
    
    while(inFile>>n){
    	for(int i=0;i<n;i++){
		inFile>>w;
   		 we.push_back(w);
    }
	sort(we.begin(),we.end());
    sum=0;
    for(int i=0;i<5;i++){
    sum=sum+we.at(we.size()-i-1);	
	}
//    we.push_back(cow);
	cout << sum << endl;
	}
	return 0;
}
