# Password Cracking using Cuda

This project was basically a class assignment for Principles of Computer Security in which I had to crack a password which was in the form of a Word+punctuation+Word+punctuation+Word. The motive of this assignment was basically to use an offline dictionary attack which to crack our passwords. There dictionary consists of 435 words and 26 punctuations.
Cuda programming played a very important role in this kind of an assignment as it uses its multiple processors to enhance the speed at which the password can be cracked. 
Brute-forcing each and every combination of passwords without mulithreading can take weeks to crack the password and hence the nvidia-2080Ti GPU was used to crack the password in just 20 minutes.
