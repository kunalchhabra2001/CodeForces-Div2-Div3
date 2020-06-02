t = int(input())

for _ in range(t):

	n = int(input())

	a = [int(x) for x in input().split()]

	liste = []
	for i in range(n):
		if(i!=n):
			liste.append((i+a[i])%n)

	y = len(liste)

	x = len(set(liste))

	if(x == y):
		print('YES')

	else:
		print('NO')
