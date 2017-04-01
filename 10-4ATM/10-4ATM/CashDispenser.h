#ifndef CASHDISPENSER_H
#define CASHDISPENSER_H

class CashDispenser
{
public:
	CashDispenser();
	void dispenseCash(int);
	bool isSufficientCashAvailable(int) const;

private:

	static const int INITIAL_COUNT = 500;//ÿ�η�500��20$�ĳ�Ʊ
	int count;

};

#endif