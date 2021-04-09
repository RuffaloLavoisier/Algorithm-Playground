import time # ttime lib


def test():
	print ("test function")

	for i in range(2,20):
		for j in range(2,i+1):
			if i % j == 0:
				if i == j:
					print (str(i))
				else :
					break

if __name__ == "__main__":
	print ("start !")
	print (__name__)
	test()
	print ("end")
else :
	print("import use !")
	print(__name__)