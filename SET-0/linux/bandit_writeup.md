Yo!
Lesgo

Is the server the Bandit, which we are trying to catch?
Or are we the Bandit, raiding the server?
But the real Bandit is the friends we made along the way.
Wait no that sounds wrong

===================================================================================================
#Level 0, 0 -> 1
Easy enough, 
ssh bandit0@bandit.labs.overthewire.org -p 2220
And we're in
cat readme

got password : ZjLjTmM6FvvyRnrb2rfNWOZOTa6ip5If
===================================================================================================
#Level 1 -> 2
Easy enough, just use ./ like an escape character
cat ./-

got password : 263JGJPfgU6LtdEvgfWU1XP5yac29mFx
===================================================================================================
#Level 2 -> 3
Using quotes to open the file, common in windows and programming
cat "spaces in this filename"

got password : MNk8KNH3Usiio41PRUEoDFPqfxLPlSmx
===================================================================================================
#level 3 -> 4
Hidden files seem funny, because attrib +h +s +r in windows seems so much more effective...
In linux, it's obviously a kernel based system so why WOULDN'T someone check for hidden files?
anyway cd inhere and then ls -la [or ls -al if you're a psycho]

Of course if you're an ACTUAL AXE MURDERER you can do 
cd inhere
cat *

got password : 2WmrDFRmJIq3IPxneAaMGhap0pFhF3NJ
===================================================================================================
#Level 4 -> 5
I did file ./* and got file 7 being ascii
cat ./-file07

got password : 4oQYVPkxZOOEOO5pTW81FB8j8lxXGUQw
===================================================================================================
#Level 5 -> 6
To check size and not executable, we do
find -size 1033c ! -executable
we get ./maybehere07/.file2

Checking file contents, we become happy :>

got password : HWasnPhtq9AVKe0dmk45nxy20cvUa6EG
===================================================================================================
#Level 6 -> 7
Just need to check for ownership
I actually started hacking with bandit and doing cd / made me feel so powerful when i did this
find -size 33c -group bandit6 -user bandit7
found password file

got password : morbNTDkSW6jIlUc0ymOdMaLnOlFVAaj
[this password be morbin]
===================================================================================================
#Level 7 -> 8
grep is the best hehe
cat data.txt | grep millionth

got password : dfwvzFQi4mU0wfNbFOe9RoWskMLg7eEc
===================================================================================================
#level 8 -> 9
FUN FACT
i didn't know how uniq works
AND APPARENTLY
It requires an ascending list

Of course
I figure this out when I write a set of 45 lines of data and test uniq on that

anyways, piping cat data.txt into sort and then into uniq

got password : 4CKMh1JI91bUIZZPXDqGanal4xvAg0JM
===================================================================================================
#Level 9 -> 10
strings is a cool tool

strings data.txt | grep "===="

got password : FGUW5ilLVJrxX9kMYMmlN4MgbpfMiqey
===================================================================================================
#Level 10 -> 11
I mean it's literally just a tool
cat data.txt | base64 -d

got password : dtR173fZKb0RRsDFSGsg2RWnpNVj3qRr
===================================================================================================
#Level 11 -> 12
tr to undo rot 13 is fun
cat data.txt | tr 'N-ZA-Mn-za-m' 'A-Za-z'

got password : 7x16WNeHIi5YkIhWsfFIqoognUTyj9Q4
===================================================================================================
#Level 12 -> 13
file <file> is a GODSEND
Just keep reading and redoing, whether it's tar -xvf or gzip -d or bzip2 -d
And then we get:

got password : FO5dwFsc0cbaIiH0h8J2eUks2vdTDwAn
===================================================================================================
#Level 13 -> 14
Nothing to be done, just copied over the ssh key to my system.
===================================================================================================
#Level 14 -> 15
Remembered to chmod 600 for my key, that's a cool addition to the ssh requirements
Added -i bandit14.key to my ssh login and I'm in :D

cat /etc/bandit_pass/bandit14 gives password for this level
MU4VWeTyJk8ROof1qqmcBPaLh7lDCPvS

telnet localhost 30000
then i sent the password and got back a correct!
Yay!

got password : 8xCjnmgoKbGLhHFAZlGE5Tmu4M2tKJQo
===================================================================================================
#Level 15 -> 16
openssl s client usage for this one
openssl s_client -connect localhost:30001

got password : kSkvUpMQ7lBYyCM4GBPvCvT1BfWRy0Dx
===================================================================================================
#Level 16 -> 17
Found open servers using do loop and checking for a response
And then sent the ssl encrypted message to each of them
for i in {31046,31518,31691,31790,31960} ; do cat /etc/bandit_pass/bandit16 | openssl s_client -connect localhost:$i -quiet; done

got ssh key :O
===================================================================================================
#Level 17 -> 18
diff passwords.old passwords.new
I mean
Ok.

got password : x2gLTTjFwMOhQ8oWNbMN362QKxfRqGlO
===================================================================================================
#Level 18 -> 19
And now for the WORST way to ensure a user doesn't log in
ssh command with a "cat readme" is literally dead ez

ssh bandit18@bandit.labs.overthewire.org -p 2220 "cat readme"

got password : cGWpMaKXVwDUNgPAVJbWYuGHVn9zl3j8
===================================================================================================
#Level 19 -> 20
Ok this one was really fun

./* cat /etc/bandit_pass/bandit20

But it seems so short
I guess this is a warning of never writing documentation for dangerous tools?

got password : 0qXahG8ZjOVMN9Ghs7iOWsCfZyXOUbYO
===================================================================================================
#Level 20 -> 21

Opened the ssh in 2 sessions, on "server" side:
echo "0qXahG8ZjOVMN9Ghs7iOWsCfZyXOUbYO" | netcat -l -p 1234
On "client" side:
./suconnect 1234

got password : EeoULMCra2q0dSkYj561DX7s1CpBuOBt
===================================================================================================
#Level 21 -> 22
Found cronjob_bandit22 and that lead to 
/usr/bin/cronjob_bandit22.sh and then I found the file it's giving the password to, and that gave me

got password : tRae0UfB9v0UzbCdn9cY0gQnds9GF58Q
===================================================================================================
#level 22 -> 23
Found another cronjob leading to another sh [/usr/bin/cronjob_bandit23.sh]
It seems complicated at first when trying to figure out whether you should do an md5sum to get mytarget

Except you can just run it

got password : tRae0UfB9v0UzbCdn9cY0gQnds9GF58Q
===================================================================================================

Technically I'm done but I'm going to finish all of them just for good measure
Since you guys said I will be compared to other applicants
Umm
Well at this point I made some mistakes regarding files
But the idea is I finished till bandit 32
Don't need to take me at my word
Just.. yea
Saying this because I'll cry if I did all that for nothing

Thanks a lot for considering me guys :>

===================================================================================================
