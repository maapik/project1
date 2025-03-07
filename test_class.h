#pragma once
using namespace std;



class test_class
{
public:

	test_class() = default;
	test_class(int size);
	test_class(const test_class& t);  
	~test_class();  


	void setElement(int ind, int x);
	int getElement(int ind);
	int getSize();
	void display();
	void author();
	bool operator==(const test_class& _other) const;
	bool operator < (const test_class& _other);
	friend bool operator-- ();
private:
	int size;
	int *numbers;
	
};

