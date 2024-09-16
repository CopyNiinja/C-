#include<bits/stdc++.h>
using namespace std;
template<class T>
class Array{
   private:
   	int size;
   	T arr[100000];
   	T max;
   	T min;
   public:
    Array(int sz);

    void Display();
    void Add(T x);
    void Insert(int index,T x);
    void Delete(int index);
    int Search(T x);
    T Get(int index);
    void Set(int index,T x);
    T Max();
    T Min();
    void Reverse(); // TODO:
    void Shift();
   
};
// Display
template<class T>
void Array<T>::Display(){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl<<"Size:"<<size<<endl;
}
//Constructor
template<class T>
Array<T>::Array(int size){
	this->size=size;
	for(int i=0;i<size;i++) {
		if(i==0){
			cin>>arr[i];
			max=min=arr[i];
			continue;

		}
		cin>>arr[i];
		if(arr[i] >max)
		{
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"Array initialized"<<endl;
}
// Add
template<class T>
void Array<T>::Add(T x){
	arr[size++]=x;
	if(x >max) max=x;
	if(x<min) min=x;
}
// Insert
template<class T>
void Array<T>::Insert(int index,T x){
	if(index >= size){
		cout<<"Wrong index! Total data: "<<size<<endl;
	}
	else{
       if(x >max) max=x;
	   if(x<min) min=x;
       int j=0;
       for(int i=size;i>index;i--)
       	arr[i]=arr[i-1];

       arr[index]=x;
       size++;

	}
}

// Delete
//TODO: MIN MAX correction
template<class T>
void Array<T>::Delete(int index){
   
   if(index >= size){
		cout<<"Wrong index! Total data: "<<size<<endl;
	}
	else{

		for(int i=index;i<size;i++){
			arr[i]=arr[i+1];
		}
		size--;
	}

}
// Search
template<class T>
int Array<T>::Search(T x){
	for(int i=0;i<size;i++){
		if(arr[i]==x)
			return i;
	}
	return -1;
}

// GET
template<class T>
T Array<T>::Get(int index){
	if(index>=size) {cout<<"Wrong index"<<endl;}
	else {return arr[index];}
}
// SET
template<class T>
void Array<T>::Set(int index,T x){
	if(index>=size) {cout<<"Wrong index"<<endl;}
	else arr[index]=x;

	if(x >max) max=x;
	if(x<min) min=x;
}
// MAX
template<class T>
T Array<T>::Max(){
	return max;
}
// MIN
template<class T>
T Array<T>::Min(){
	return min;
}
// REVERSE


int main()
{ 
   int n;
   cin>>n;
 
  Array<int> a(n);
  Array<char> b(n);
  Array<double> d(n);

  b.Display();

  a.Add(12);
  a.Insert(5,6);
  a.Delete(6);
  cout<<a.Search(10)<<endl;
  cout<<a.Get(0)<<endl;
  a.Set(0,100);
  cout<<a.Max()<<" "<<a.Min()<<endl;





}





