#include <tcframe/spec.hpp>

using namespace tcframe;

class ProblemSpec : public BaseProblemSpec
{
  protected:
    int lengthArray;
    vector<int> array;
    int adjacent;
    void InputFormat()
    {
        LINE(lengthArray, array % SIZE(lengthArray));
    }

    void OutputFormat()
    {
        LINE(adjacent);
    }

    void GradingConfig()
    {
        TimeLimit(0.5);
        MemoryLimit(0.1);
    }

    void Constraints()
    {
        CONS(2 <= lengthArray && lengthArray <= 10);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec>
{
  protected:
    void SampleTestCase1()
    {
        Input({"6 3 6 -2 -5 7 3"});
        Output({"21"});
    }

    void TestCases()
    {
        CASE(lengthArray = 2, array = {-1, -2});
        CASE(lengthArray = 6, array = {5, 1, 2, 3, 1, 4});
    }
};