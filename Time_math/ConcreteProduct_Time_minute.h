#pragma once
#include "head.h"
class ConcreteProduct_Time_minute : public AbstractProduct_Time {
public:
	int run(int def) const override {
		return def * 60;
	}
};

