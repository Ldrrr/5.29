bool isMonotonic(int* A, int ASize)
{
    int i,j;
    for(i=1;i<ASize&&A[i-1]<=A[i];++i);
    for(j=1;j<ASize&&A[j-1]>=A[j];++j);
    return i==ASize||j==ASize;
}
