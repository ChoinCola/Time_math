#pragma once
#include "head.h"

class Client
{
	std::unique_ptr<AbstractProduct_Time> product_Time;
	std::unique_ptr<AbstractProduct_Time> product_Seconde;
	std::unique_ptr<AbstractProduct_Time> product_Minute;
	std::unique_ptr<AbstractProduct_Time> product_Millisecond;

public:
	Client(std::unique_ptr<AbstractFactory_Time> factory)
		:	product_Time(factory->createproduct_Time()),
			product_Seconde(factory->createproduct_Seconde()),
			product_Minute(factory->createproduct_Minute()),
			product_Millisecond(factory->createproduct_Millisecond())
	{}

	int time(int def) const {
		return product_Time->run(def);
	}
	int Seconde(int def) const {
		return product_Seconde->run(def);
	}
	int Minute(int def) const {
		return product_Minute->run(def);
	}
	int Millisecond(int def) const {
		return product_Millisecond->run(def);
	}
};

