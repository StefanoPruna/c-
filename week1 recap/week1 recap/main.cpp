#include <iostream>

using namespace std;

void main(){
	float a = 72;
	float *ptr; //points to the memory address of floats (can have pointers of any type though)

	ptr = &a; //&(reference symbol), means get memory address of variable
				//so now we're pointing to the memory address of a

	cout<<ptr<<endl; //outputs the value in ptr(memory address of a)
	cout<<*ptr<<endl; //(*)de-referenced - gets value from what we are pointing at (value of a)

	//once de-ref'd, we can treat it like the raw type
	*ptr = *ptr + 8;
	//similar to a = a+8;
	cout<<a<<endl; //just showing we have changed 'a' through the pointer

	float **p; //points to things of type (float *) eg ptr
	p = &ptr;
	cout<<p<<endl;//outputs value stored in p (which is the mem addr of ptr)
	cout<<*p<<endl;//(*)de-ref'd once: get value of what we are pointing at 
					//(value in ptr, which is 'a's mem addr)
	cout<<**p<<endl; //(**)de-ref'd twice: get of what the above is pointing at (a's value)

	**p = **p + 8;

	cout<<a<<endl;//again shows we have changed 'a' through pointers

	system("pause");
}