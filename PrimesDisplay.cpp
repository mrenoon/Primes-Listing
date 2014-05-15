#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;

vi ap;
vector<bool> prime;

ll N,i,j;
//version 3.0
int main(){
	printf("Input N = ");
	scanf("%lld", &N);
	printf("\n");
	prime.assign(N+1,1);
	for (i=2;i<=N;i++)
		if (prime[i]){
			ap.push_back(i);
			for (j=i*i;j<=N;j+=i)
				prime[j] = 0;
		}

	printf("All the primes that are less than or equal to %lld are:\n",N);
	for (i=0;i<(ll)ap.size()-1;i++) printf("%lld  ,", ap[i]);

	printf("%lld\n", ap[ (int)ap.size()- 1 ]);
	
	//char c = getchar();

}
