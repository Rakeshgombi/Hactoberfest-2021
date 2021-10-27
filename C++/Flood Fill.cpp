
//   Flood fill Question

 // -> Given a matrix, a source row and source column and a new color.We have to find the initial colour
    //  of source cell and then find the part which is 4 dimensionally connected to the source cell and having same color 
    // as initial color and fill that part with a new color.
    
 #include<bits/stdc++.h>
 using namespace std;
 
 vector<vector<int>> v ={{1,1,1},{1,1,0},{1,0,1}};
 int newColor = 2;
 
 void dfs(int i,int j,int initialColor)
 {
 	int n = v.size();
 	int m = v[0].size();
 	
 	// discard all invalid calls
 	if(i<0 || j<0 || i>=n || j>=m) return;
 	
 	if(v[i][j] != initialColor) return;
 	
 	// fill with new color if it is a valid call
 	v[i][j] = newColor;
 	
 	// call dfs in all 4 directions
 	dfs(i-1,j,initialColor);
 	dfs(i,j+1,initialColor);
 	dfs(i+1,j,initialColor);
 	dfs(i,j-1,initialColor);
 }
 
 int main()
 {
  	int sr = 1;
  	int sc = 1;
  	
  	int initialColor = v[sr][sc];
  	
  	if(newColor != initialColor)  dfs(sr,sc,initialColor);
  	
  	//printing matrix
  	for(auto i:v)
  	{
  		for(int x: i)
  		{
  			cout<<x<<" ";
		}
		  cout<<endl;
	  }
 }  
    



