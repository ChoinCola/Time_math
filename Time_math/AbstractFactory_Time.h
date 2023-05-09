#pragma once
#include "head.h"

class AbstractFactory_Time
{
public:
	virtual ~AbstractFactory_Time() {}
	virtual std::unique_ptr<AbstractProduct_Time> createproduct_Time() const = 0;
	virtual std::unique_ptr<AbstractProduct_Time> createproduct_Seconde() const = 0;
	virtual std::unique_ptr<AbstractProduct_Time> createproduct_Minute() const = 0;
	virtual std::unique_ptr<AbstractProduct_Time> createproduct_Millisecond() const = 0;
};