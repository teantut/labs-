#pragma once
#include "Header.h"
class tea :public drink
{
public :
	tea () ;
void play () ;
void play (int i);
};
class coffee :public drink 
{
public:
	coffee ();
	void play () ; 
	void play (int i);
};
class black:public tea
{
public:
	black();
	void play();
	void play(int i);
};
class green :public tea
{
public:
	green();
	void play();
};
class white :public tea
{
public:
	white ();
	void play();
};
class gongmei :public white 
{
public:
	gongmei();
	void play();
};
class oolong :public white
{
public:
	oolong();
	void play();
};
class cappuccino : public coffee
{
	public:
	cappuccino();
void play ();
};
class espresso : public coffee
{
public:
	espresso();
	void play();
};
class latte : public coffee
{
public:
	latte();
	void play();
};
class syruptrue : public latte
{
public:
	syruptrue();
	void play();
};
class syrupfolse: public latte
{
public:
	syrupfolse ();
	void play();
};
class caramel : public syruptrue
{
public:
	caramel();
	void play();
};
class melon : public syruptrue
{
public:
	melon ();
	void play();
};


