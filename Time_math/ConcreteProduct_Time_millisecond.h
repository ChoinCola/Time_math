#pragma once
#include "head.h"

class ConcreteProduct_Time_millisecond : public AbstractProduct_Time {
public:
	int run(int def) const override {
		return def * 3600 * 1000;
	}
};

