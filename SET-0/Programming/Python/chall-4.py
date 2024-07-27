def encrypt(s):
	enc = ''
	for ch in s:
		if ch.isupper() and ch.isalpha():
			ch = chr(65 + (ord(ch) + 13 - 65)%26)
		elif ch.isalpha():
			ch = chr(97 + (ord(ch) + 13 - 97)%26)
		enc += ch
	return enc

def decrypt(s):
	dec = ''
	for ch in s:
		if ch.isalpha():
			if (ch.isupper() and ord(ch) < 78) or (ch.islower() and ord(ch) < 110):
				ch = chr(ord(ch) + 13)
			else:
				ch = chr(ord(ch) - 13)
		dec += ch
	return dec

if int(input("Enter 1 for encrypt, 0 for decrypt : ")):
	print("3ncry9T3D : ", encrypt(input("Enter plaintext : ")))
else:
	print("Decrypted : ", decrypt(input("Enter C19h3RT3xT : ")))
