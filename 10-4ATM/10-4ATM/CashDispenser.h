#ifndef CASHDISPENSER_H
#define CASHDISPENSER_H

class CashDispenser
{
public:
	CashDispenser();
	void dispenseCash(int);
	bool isSufficientCashAvailable(int) const;

private:

	static const int INITIAL_COUNT = 500;//每次放500张20$的钞票
	int count;

};

#endif