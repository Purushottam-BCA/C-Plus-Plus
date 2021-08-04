#define ar(i,n)      for(int i=0;i<n;i++)
#define ard(i,n)     for(int i=n-1;i>=0;--i)
#define rep(i,a,b)   for(int i=a;i<=b;++i)
#define nl           cout<<"\n"
#define len(a)       sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

int Heap_size;

void swap(int &a,int &b) { int temp=a; a=b; b=temp; }

void show(int a[],int n)
{
   rep(i,1,n)
      cout<<a[i]<<" ";
   nl;
}

void max_heapify(int a[], int i)
{
   int l_child = 2*i;        // Finding Left Child
   int r_child = (2*i)+1;    // Finding Right Child
   int largest = i;
   if(l_child <= Heap_size && a[l_child]>a[largest]) // if left child exist & if A[left_child] > A[Largest] then Max = Left_child
      largest = l_child;
   if(r_child<=Heap_size && a[r_child]>a[largest]) // if Right child exist & if A[right_child] > A[Largest] then Max = right_child
      largest= r_child;
   if(largest != i)     // if we got largest other than root we will swap values
      {
       swap(a[i],a[largest]);
       max_heapify(a,largest);   // Recursive Call
      }
}

void build_max_heap(int a[])  // Building Max-heap
{
   for(int i=Heap_size/2;i>=1;i--) // All leafs are already a max heap so no need to check them , Only check Non-Leaf
      max_heapify(a,i);
}

void heap_sort(int a[],int n)
{
   build_max_heap(a);                  // Turn the Array into Max-Heap :: O(n)
   for(int i=n; i>1; i--)
   {
      swap(a[1],a[i]);                // Swap Last item with First
      Heap_size--;                    // Ignore last item from heap as it is already sorted
      max_heapify(a,1);               // Now perform Haepify
   }
}

int extract_Max(int a[],int n)   // O(log n)
{
   if(n<1)
      return 0;
   int num = a[1];
   a[1] = a[n];
   Heap_size--;
   max_heapify(a,1);
   return num;
}

void heap_increase_key(int a[],int i, int new_val)    // O(log n)
{
   if(a[i]>new_val)
      return;
   a[i]=new_val;
   while(i>1 && new_val>a[i/2])
   {
      swap(a[i/2],a[i]);
      i/=2;
   }
}

void insert_in_Max_heap(int a[],int n,int value)
{
   a[n]=new_val;
   while(n>1 && new_val>a[n/2])
   {
      swap(a[n/2],a[n]);
      n/=2;
   }
}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   rep(i,1,n)
      cin>>arr[i];
   Heap_size = len(arr);
   show(arr,n);
   heap_sort(arr,n);
   show(arr,n);
   return 0;
}
