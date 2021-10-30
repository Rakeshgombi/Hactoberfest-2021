f = open("hello.txt", "w")

print(f.read())
f.close()
f = open("hello.txt", "r")
print(f.read())
f = open("hello.txt", "x")
f.write("one hundred two three only")
f.close()
