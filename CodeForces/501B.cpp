#include <bits/stdc++.h>

using namespace std;

typedef map<string, string> mss;
typedef vector<string> vs;

mss lib;
vs names;
int n;

string solve(mss lib, string nome){
	if(lib[nome] == ".")
		return nome;
	else
		return solve(lib, lib[nome]);
}

int main(){
	scanf("%d", &n);

	string name, reName;
	for(int i = 0; i < n; i++){
		cin >> name >> reName;

		if(lib[name] == "") names.push_back(name);

		lib[name] = reName;
		lib[reName] = ".";
	}

	cout << names.size() << endl;
	for(int i = 0; i < names.size(); i++)
		cout << names[i] << " " << solve(lib, names[i]) << endl;

	return 0;
}
