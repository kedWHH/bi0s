l = [int(i) for i in input().split()]
f = 1
while f:
	f = 0
	for i in range(len(l)-1):
		if l[i]>l[i+1]:
			l[i+1],l[i] = l[i], l[i+1]
			f = 1

print(*l)

find = int(input())
u,d = len(l)-1,0
while u!=d:
	mid = (u+d)//2
	if l[mid] < find : d = mid + 1
	elif l[mid] > find : u = mid - 1
	else:
		print(mid)
		f = 1
		break
if not f :
	if l[mid] == find : print(d)
	else: print(-1)
