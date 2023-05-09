#pragma once
#include "head.h"
class ConcreteProduct_Time_Time : public AbstractProduct_Time {
public:
	int run(int def) const override {
		return def;
	}
};

