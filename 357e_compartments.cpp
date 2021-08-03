#include <iostream>
#include <cmath>

int solve(int a[], int n){
	int switches;

	int ones = 0, twos = 0, threes = 0, fours = 0;

	for (int i = 0; i < n; i++){
		std::cin >> a[i];
		if (a[i] == 4) {
			fours = fours+1;
		}
		if (a[i] == 3) {
			threes = threes+1;
		}
		if (a[i]==2) {
			twos = twos+1;
		}
		if (a[i] == 1) {
			ones = ones+1;
		}
	}

	switches = std::min(ones, twos);
	threes = threes + switches;
	twos = twos-switches;
	ones = ones-switches;



	if (twos==ones) {
		return switches;
	}

	if (ones>2) {
		threes = threes + ones/3;
		switches = switches + 2*(ones/3);
		ones = ones%3;
	}
	if (twos>1) {
		threes = threes + 2*(twos/3);
		switches = switches + 2*(twos/3);
		twos = twos%3;


		int temp_twos = twos/2;
		switches = switches + temp_twos*2;
		twos = twos - 2*temp_twos;
		fours = fours + temp_twos;
	}

if (ones == 0 && twos == 0) {
	return switches;
}

//now either we have 1 or 2 ones remaining or 1 twos remaining (ones,twos) -> (1,0)(2,0) (0,1)
if (ones == 1 && threes > 0) {
	switches = switches+1;
	return switches;
}
if (ones == 1 && fours > 1) {
	switches = switches+2;
	return switches;
}
if (ones == 2 && threes > 1) {
	switches = switches + 2;
	return switches;
}
if (ones == 2 && fours > 0) {
	switches = switches + 2;
	return switches;
}

if (twos == 1 && fours > 0) {
	switches = switches + 1;
	return switches;
}
if (twos == 1 && threes >= 2) {
	switches = switches + 2;
	return switches;
}

	
	return -1;
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	std::cin >> n;
	int a[n];

	

	

	std::cout << solve(a,n) << "\n";
	
	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
