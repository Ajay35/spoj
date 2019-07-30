from sys import stdin, stdout  
t=int(stdin.readline()) 
for i in range(0,t):
	a=stdin.readline().split() 
	mx=0
	cur=len(a[0])
	cur_l=1;
	for i in range(1,len(a)):
		if len(a[i])==len(a[i-1]):
			cur_l+=1;
			mx=max(mx,cur_l);
		else:
			mx=max(cur_l,mx);
			cur=a[i];
			cur_l=1;
	print(mx)