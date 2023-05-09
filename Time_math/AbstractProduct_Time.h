#pragma once

class AbstractProduct_Time
{
public:
	virtual ~AbstractProduct_Time() {}
	virtual int run(int def) const = 0;
};

