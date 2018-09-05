#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int year;
    int century;

    void InputFormat() {
        LINE(year);
    }

    void OutputFormat() {
        LINE(century);
    }

    void GradingConfig() {
        TimeLimit(0.5);
        MemoryLimit(64);
    }

    void Constraints() {
        CONS(1 <= year && year <= 2005);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "1900"
        });
        Output({
            "19"
        });
    }

    void TestCases() {
        CASE(year = 1901);
        CASE(year = 2000);
        CASE(year = 1290);
        CASE(year = 1889);
        CASE(year = rnd.nextInt(1, 2005));
    }
};