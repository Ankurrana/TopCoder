//     
// For a given positive integer X we can obtain the reversed positive integer Rev(X) by reversing the order of X's digits 
// and removing leading zeroes. For example, if X = 123 then Rev(X) = 321; and if X = 100, then Rev(X) = 1.
 
// You will be given two positive integers x and y. Return their reversed sum, which is defined as Rev(Rev(x) + Rev(y)).
// Definition
//     
// Class:
// ReversedSum
// Method:
// getReversedSum
// Parameters:
// int, int
// Returns:
// int
// Method signature:
// int getReversedSum(int x, int y)
// (be sure your method is public)

#include "iostream"
using namespace std;

int reverse(int a){
	int ans = 0;
	while(a>0){
		ans = ans * 10;
		ans += a%10;
		a = a/10;
	}
	return ans;
}

int getReversedSum(int a, int b){
	 return reverse(reverse(a) + reverse(b));
}

class ReversedSum{
public:
	int getReversedSum(int a, int b){
		return reverse(reverse(a)+reverse(b));
	}
	int reverse(int a){
		int ans = 0;
		while(a>0){
			ans = ans * 10;
			ans += a%10;
			a = a/10;
		}
		return ans;
	}
};
int main(){
	cout << getReversedSum(456,789);
}


