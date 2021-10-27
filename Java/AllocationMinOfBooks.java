class AllocationMinOfBooks 
{
    //Function to find minimum number of pages.
    public static int findPages(int[]A,int N,int M)
    {
        int sum = 0;
        int maxNum = 0;
        for(int i = 0;i<N;i++){
            sum+=A[i];
            maxNum = Math.max(maxNum,A[i]);
        }
        
        int low = maxNum;
        int high = sum;
        int res = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isValid(A,N,M,mid)){
                res = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
        
    }
    public static boolean isValid(int[] A,int N,int M,int max){
        int student = 1;
        int s = 0;
        for(int i = 0;i<N;i++){
            s+=A[i];
            if(s>max){
                student++;
                s = A[i];
            }
            if(student>M){
                return false;
            }
            }
            return true;
        }
    };