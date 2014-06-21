#include "iostream"
#include <string>

using namespace std;
class CheckFunction{	
public:
	int newFunction(string str){
		int i;
		int a[] = {6,2,5,5,4,5,6,3,7,6};
		int length = str.length();
		int ans = 0;
		for(i=0;i<length;i++){
			ans += a[str[i]-48];
		}
		return ans;
	}
};
