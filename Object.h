#pragma once

using namespace std;

class Object
{
public:
	Object();
	~Object();
	virtual void Show()=0;
};