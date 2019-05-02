def findPai(x):
	if x == pai[x]:
      		return x
	pai[x] = findPai(pai[x])
	return pai[x]	
