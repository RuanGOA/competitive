void solve(){
	cravo[0] = true;
	cravo[1] = true;
	for(int i = 2; i < MAXS; i++){
		if(!cravo[i]){
			for(int j = 2; j * i < MAXS; j++){
				cravo[j*i] = true;
			}
			prime.push_back(i);
		}
	}
}
