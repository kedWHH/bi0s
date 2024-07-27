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
