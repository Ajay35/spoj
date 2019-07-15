int t,n,m,i,j;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    vector<int> h(n-1),v(m-1);
    for(i=0;i<n-1;i++)
      cin>>h[i];
    for(i=0;i<m-1;i++)
      cin>>v[i];
    ll ans=0;
    sort(h.begin(),h.end(),greater<int>());
    sort(v.begin(),v.end(),greater<int>());
    int i=0,j=0,hp=1,vp=1;
    while(i<n-1 && j<m-1)
    {
      if(h[i]>=v[j])
      {
        ans+=(vp*h[i]);
        hp++;
        ans+=(hp*v[j]);
        vp++;
      }
      else
      {
        ans+=(hp*v[j]);
        vp++;
        ans+=(vp*h[i]);
        hp++;
      }
      i++,j++;
    }
    
    while(i<n-1)
    {
      ans+=(vp*h[i]);
      i++;
    }
    
    while(j<m-1)
    {
      ans+=(hp*v[j]);
      j++;
    }
    cout<<ans<<"\n";
  }
  return 0;