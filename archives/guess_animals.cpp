#include <bits/stdc++.h>
using namespace std;
#define check_time() cerr<<"time taken: "<<(float)clock()/CLOCKS_PER_SEC <<" secs"<<"\n"
#define io(...) freopen((string(__VA_ARGS__)+".in").c_str(),"r",stdin);freopen(((string(__VA_ARGS__)+".out")).c_str(),"w",stdout);
vector<string> characteristics[100];
int N;
int num_common(int i, int j){
	int count = 0;
	vector<string> &v1 = characteristics[i], &v2 = characteristics[j];
	for (int i = 0; i < v1.size(); i++)
		for (int j = 0; j < v2.size(); j++)
			if (v1[i] == v2[j]) count++; // if the same characteristic, add to count
	return count;
}
int main(){
	//io("guess");
	cin.tie(0)->sync_with_stdio(0),cin.exceptions(ios_base::failbit);
	cin >> N;
	string s;
	for (int i = 0; i < N; i++) {
		int K;
		cin >> s >> K;
		for (int j = 0; j < K; j++) {
			cin >> s;
			characteristics[i].push_back(s); // add to the array of vectors
		}
	}
	
	int largest = 0;
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			largest = max(largest, num_common(i, j)); // keep track of the largest
	cout << largest + 1 << "\n"; // output one more than the largest
	return 0;
	check_time();
	return 0;	
}