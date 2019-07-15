from sys import stdin, stdout  

while True:
	arr=[int(x) for x in stdin.readline().split()] 
 	if arr[0]==0 and arr[1]==0:
 		break
 	else:
 		print(pow(arr[0],arr[1]))
  