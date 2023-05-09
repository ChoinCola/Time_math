#pragma once
#include "head.h"

class ConcretreFactory_Time : public AbstractFactory_Time {
public:
	std::unique_ptr<AbstractProduct_Time> createproduct_Time() const override {
		return std::make_unique<ConcreteProduct_Time_Time>();
	}
	std::unique_ptr<AbstractProduct_Time> createproduct_Seconde() const override {
		return std::make_unique<ConcreteProduct_Time_seconde>();
	}
	std::unique_ptr<AbstractProduct_Time> createproduct_Minute() const override {
		return std::make_unique<ConcreteProduct_Time_minute>();
	}
	std::unique_ptr<AbstractProduct_Time> createproduct_Millisecond() const override {
		return std::make_unique<ConcreteProduct_Time_millisecond>();
	}
};
