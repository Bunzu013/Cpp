//
// pch.cpp
//

#include "pch.h"

using namespace testing;
using namespace std;


struct BankTest : Test {
	BankAccount* bank;

	BankTest() {
		bank = new BankAccount("Baran", "123123123", 50500);
	}
	~BankTest() {
		delete bank;
	}
};

struct StanKonta {
	double balans;
	double wplacanaKwota, balansPoWplacie;
	double pobranaKwota, balansPoPobraniu;
	bool milioner;
};


struct BankAccountParamTest : BankTest, testing::WithParamInterface<StanKonta> {
	BankAccountParamTest() {
		bank->setBalance(GetParam().balans);
	}
};

TEST_F(BankTest, Wplata) {
    EXPECT_THROW(bank->add(0), invalid_argument);

    double poczatkowyBalans = 1.25;
    double wplacanaKwota = 0.33;
    bank->setBalance(poczatkowyBalans);
    bank->add(wplacanaKwota);
    EXPECT_EQ(poczatkowyBalans + wplacanaKwota, bank->getBalance());
}

TEST_F(BankTest, Wyplata) {
    bank->setBalance(1.25);
    EXPECT_THROW(bank->withdraw(1.33), runtime_error);

    EXPECT_THROW(bank->withdraw(0), invalid_argument);

    double poczatkowyBalans = 1.25;
    double wyplacanaKwotat = 0.33;
    bank->setBalance(poczatkowyBalans);
    bank->withdraw(wyplacanaKwotat);
    EXPECT_EQ(poczatkowyBalans - wyplacanaKwotat, bank->getBalance());
}

TEST_F(BankTest, CzyMilioner) {
    bank->setBalance(999999);
    EXPECT_FALSE(bank->isMillionaire());
    
    bank->setBalance(1000000);
    EXPECT_TRUE(bank->isMillionaire());

    bank->setBalance(1000001);
    EXPECT_TRUE(bank->isMillionaire());
}

TEST_F(BankTest, BalanceSetter) {
    double kwota = 123.123;
    bank->setBalance(kwota);
    EXPECT_DOUBLE_EQ(kwota, bank->getBalance());
}

TEST_P(BankAccountParamTest, NTests) { 
    StanKonta params = GetParam();

    bank->setBalance(params.balans);
    bank->add(params.wplacanaKwota);
    EXPECT_DOUBLE_EQ(params.balansPoWplacie, bank->getBalance());

    bank->setBalance(params.balans);
    bank->withdraw(params.pobranaKwota);
    EXPECT_DOUBLE_EQ(params.balansPoPobraniu, bank->getBalance());

    bank->setBalance(params.balans);
    EXPECT_EQ(params.milioner, bank->isMillionaire());
}

INSTANTIATE_TEST_CASE_P

(Default, BankAccountParamTest, Values(
    StanKonta{
            1024.24,
            31.25,
            1055.49,
            91.33,
            932.91,
            false
    },
    StanKonta{
            1200000,
            12,
            1200012,
            12567,
            1187433,
            true
    }
));