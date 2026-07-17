ALGORITHM:
STEP->1:Initialize arr[],sizeofarray(n),low=0,high=n-1;
STEP->2:while(low<high) -> int mid=low+(high-low)/2.
STEP->3:if(arr[mid]<arr[mid+1]) -> low=mid+1.
STEP->4:else -> high=mid.
STEP->5:return arr[low].
