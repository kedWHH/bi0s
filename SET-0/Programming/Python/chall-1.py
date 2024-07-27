st = input("Enter a string : ")
sn,l = '',{}
for ch in st:
	if ch.lower() not in l.keys() and ch.isalpha():
		l [ch.lower()] = 1
	elif ch.isalpha():
		l[ch.lower()] += 1
	sn = ch + sn

print(*[i + ' : ' +  str(l[i]) for i in l], sep = '\n')
print(sn)
