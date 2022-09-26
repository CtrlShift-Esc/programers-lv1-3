#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
	double answer = 0;
	for (int i = 0; i < arr.size(); i++)
		answer += arr[i];
	answer /= arr.size();
	return answer;
}

void main()
{
	//test
	//auto str = solution({1,2,3,4});
}