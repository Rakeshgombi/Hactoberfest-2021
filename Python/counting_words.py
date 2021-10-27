f=open("pract1.py","r")
numChars=numWords=numLines=0

#No of characters
for i in f.read():
    if i!=" ":
        numChars+=1
    else:
        numWords+=1

print("No of characters in file excluding spaces are",numChars)
print("\nNo of words in file are",numWords)

f.close()

f=open("pract1.py","r")

k=""
for j in f:
    numLines+=1
    k=j+k
    
print("\nNo of lines in file are",numLines)
print("\nPrinting each line in reverse order:\n",k)    
