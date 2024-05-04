#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


/*class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }


};

Node* insertinbst(Node* root,int d)
{
    if(root==NULL)
    {
        root=new Node(d);
        return root;
    }
     cout<<"enter position";
    char pos;
    cin>>pos;

    cout<<"enter position";
    if(pos=='r')
        root->right=insertinbst(root->right,d);
        else
        root->left=insertinbst(root->left,d);

    return root;
}

void takeinput(Node* root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insertinbst(root,data);
        cin>>data;
    }
}
/*void print(Node* root)
{
    Node* root=temp;
    while(temp!NULL)
}


int main()
{
    Node* root=NULL;
    takeinput(root);

} */




// Function to swap the position of two elements

void swap(int a, int b)
{

	int temp = a;
	a = b;
	b = temp;
}

// To heapify a subtree rooted with node i which is an index in arr[]. n is size of heap

void heapify(int arr[], int N, int i)
{
	// Find largest among root, left child and right child. Initialize largest as root
	int largest = i;

	// left = 2*i + 1
	int left = 2 * i + 1;

	// right = 2*i + 2
	int right = 2 * i + 2;

	// If left child is larger than root
	if (left < N && arr[left] > arr[largest])

	largest = left;

	// If right child is larger than largest
	// so far
	if (right < N && arr[right] > arr[largest])

	largest = right;

	// Swap and continue heapifying, if root is not largest, If largest is not root
	if (largest != i) {

	swap(arr[i], arr[largest]);

	// Recursively heapify the affected sub-tree
	heapify(arr, N, largest);
	}
}

// Main function to do heap sort
void heapSort(int arr[], int N)
{
	int i;
	// Build max heap
	for (i = N / 2 - 1; i >= 0; i--)

	heapify(arr, N, i);

	// Heap sort
	for (i = N - 1; i >= 0; i--)
	{
		swap(arr[0], arr[i]);
		// Heapify root element, to get highest element at, root again
		heapify(arr, i, 0);
	}
}

// A utility function to print array of size n
void printArray(int arr[], int N)
{
	int i;
	for (i = 0; i < N; i++)
		cout<<arr[i]<< " ";
	cout<<"\n";
}


int main()
{

    int N;
    cin>>N;
    int arr[N];
	 /*int arr[] = {12,3,19,2,15,7,5};


	 int N = sizeof(arr) / sizeof(arr[0]); */
	 for(int i=0;i<N;i++)
    {
       // cin>>arr[i];
       arr[i]=rand()%10000000000;
    }
        clock_t start,ending;
	// clrscr();
        start=clock();
	 heapSort(arr, N);
	 ending=clock();
	 cout<<"Sorted array is\n";
	 printArray(arr, N);
	  cout<<double(ending-start)/CLOCKS_PER_SEC;

	 //getch();

}
